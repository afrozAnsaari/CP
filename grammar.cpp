#include <bits/stdc++.h>
using namespace std;

string trim(const string &s)
{
    string t = s;
    t.erase(remove_if(t.begin(), t.end(), ::isspace), t.end());
    return t;
}

void printProductions(const map<char, vector<string>> &productions)
{
    cout << "\nProductions\n";
    for (auto &p : productions)
    {
        cout << p.first << " -> ";
        for (int i = 0; i < p.second.size(); i++)
        {
            cout << p.second[i];
            if (i != p.second.size() - 1)
                cout << " | ";
        }
        cout << "\n";
    }
}

int main()
{
    int n;
    cout << "Enter number of productions: ";
    cin >> n;
    cin.ignore();

    map<char, vector<string>> productions;
    set<char> nonTerminals, terminals;

    cout << "Enter productions (use 'e' for epsilon, e.g. A->aB | e):\n";
    for (int i = 0; i < n; i++)
    {
        string line;
        getline(cin, line);
        line = trim(line);

        if (line.empty())
            continue;
        char lhs = line[0]; // Left-hand side
        nonTerminals.insert(lhs);

        // Find right-hand side(s)
        string rhsPart = line.substr(line.find("->") + 2);
        stringstream ss(rhsPart);
        string rule;
        while (getline(ss, rule, '|'))
        {
            rule = trim(rule);
            productions[lhs].push_back(rule);

            for (char c : rule)
            {
                if (isupper(c))
                    nonTerminals.insert(c);
                else if (islower(c) || c == 'e')
                    terminals.insert(c);
            }
        }
    }

    // Print all productions
    printProductions(productions);

    // --- Check for Null (Epsilon) Productions ---
    set<char> nullable;
    for (auto &p : productions)
    {
        for (auto &rhs : p.second)
        {
            if (rhs == "e" || rhs.empty())
            {
                nullable.insert(p.first);
            }
        }
    }

    // --- Check for Generating Symbols ---
    set<char> generating;
    bool changed = true;
    while (changed)
    {
        changed = false;
        for (auto &p : productions)
        {
            for (auto &rhs : p.second)
            {
                bool allGood = true;
                for (char c : rhs)
                {
                    if (isupper(c) && generating.find(c) == generating.end())
                    {
                        allGood = false;
                        break;
                    }
                }
                if (allGood)
                {
                    if (generating.find(p.first) == generating.end())
                    {
                        generating.insert(p.first);
                        changed = true;
                    }
                }
            }
        }
    }

    // --- Non-generating symbols ---
    set<char> nonGenerating;
    for (auto c : nonTerminals)
    {
        if (generating.find(c) == generating.end())
            nonGenerating.insert(c);
    }

    // --- Check for Self Loops ---
    set<char> selfLoop;
    for (auto &p : productions)
    {
        for (auto &rhs : p.second)
        {
            if (rhs.find(p.first) != string::npos)
            {
                selfLoop.insert(p.first);
            }
        }
    }

    cout << "\nResults\n";
    cout << "Nullable Symbols: ";
    if (nullable.empty())
        cout << "None";
    else
        for (char c : nullable)
            cout << c << " ";

    cout << "\nNon-Generating Symbols: ";
    if (nonGenerating.empty())
        cout << "None";
    else
        for (char c : nonGenerating)
            cout << c << " ";

    cout << "\nSelf-loop Symbols: ";
    if (selfLoop.empty())
        cout << "None";
    else
        for (char c : selfLoop)
            cout << c << " ";
    cout << "\n";

    return 0;
}

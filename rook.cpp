#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        int row = s[1] - '0'; // convert '4' → 4
        int col = s[0];       // store as ASCII of 'a'..'h'

        for (int i = 0; i < 8; i++)
        {
            int r = i + 1;
            if (r == row)
                continue; // skip same cell
            cout << (char)col << r << '\n';
        }

        for (int i = 0; i < 8; i++)
        {
            char c = (char)(97 + i);
            if (c == (char)col)
                continue; // skip same cell
            cout << c << row << '\n';
        }
    }

    return 0;
}

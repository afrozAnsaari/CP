#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<string> s(n);

    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (s[i].size() <= 10)
        {
            cout << s[i] << endl;
        }
        else
        {
            cout << s[i][0] << s[i].size() - 2 << s[i].back() << endl;
        }
    }
    return 0;
}

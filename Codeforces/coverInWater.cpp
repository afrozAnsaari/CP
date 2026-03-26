#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        if (s.find("...") != string::npos)
        {
            cout << 2 << "\n";
        }
        else
        {
            int cnt = count(s.begin(), s.end(), '.');
            cout << cnt << "\n";
        }
    }
}

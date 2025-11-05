#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        if (n & 1)
        {
            cout << "No" << '\n';
            continue;
        }
        int sn = n / 2;
        string s1 = s.substr(0, sn);
        string s2 = s.substr(sn);
        if (s1 == s2)
            cout << "Yes" << '\n';
    }
    return 0;
}
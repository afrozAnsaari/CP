#include <bits/stdc++.h>
using namespace std;

int main(void)
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        bool valid = true;
        cin >> n;
        string s;
        cin >> s;
        // cout << s << '\n';
        int cnt = 0;
        unordered_map<char, int> mp;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == s[i + 1])
                ++cnt;
            ++mp[s[i]];
        }
        ++mp[s[n - 1]];
        for (auto &p : mp)
            if (p.second & 1)
            {
                valid = false;
                break;
            }
        cout << ((cnt >= 1 && valid == true) ? "YES\n" : "NO\n");
    }

    return 0;
}
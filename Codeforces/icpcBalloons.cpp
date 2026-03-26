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
        int n;
        cin >> n;
        string s;
        cin >> s;
        map<char, int> mp;
        for (char c : s)
            mp[c]++;
        int ans = 0;
        for (auto p : mp)
            ans += p.second;
        ans += mp.size();
        cout << ans << '\n';
    }
    return 0;
}
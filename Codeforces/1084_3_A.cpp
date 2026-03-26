#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, ansf = 0, ans = 0, maxf = 0, maxs = 0;
        unordered_map<ll, ll> mp;
        cin >> n;
        vector<ll> a(n);
        for (ll &i : a)
            cin >> i;
        for (ll i : a)
            mp[i]++;

        for (auto &p : mp)
            if (p.first > maxf)
            {
                maxf = p.first;
                maxs = p.second;
            }
        cout << maxs << '\n';
    }
}
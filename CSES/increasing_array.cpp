#include <bits/stdc++.h>

using ll = unsigned long long;
using namespace std;

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    ll n, ans = 0;
    cin >> n;
    vector<ll> a(n);

    for (ll &x : a)
        cin >> x;

    for (ll i = 1; i < a.size(); i++)
    {
        if (a[i] < a[i - 1])
        {
            ans += a[i - 1] - a[i];
            a[i] = a[i - 1];
        }
    }
    cout << ans << '\n';
    return 0;
}
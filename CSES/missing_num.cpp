#include <bits/stdc++.h>

using namespace std;

using ll = long long;
int main()
{

    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    ll n, sum = 0;
    cin >> n;
    vector<ll> a(n - 1);

    for (ll &i : a)
        cin >> i;
    for (ll i : a)
        sum += i;

    cout << (ll((n * (n + 1) / 2)) - sum) << '\n';

    return 0;
}
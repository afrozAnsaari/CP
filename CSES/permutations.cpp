#include <bits/stdc++.h>

using ll = unsigned long long;

using namespace std;

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    ll n;
    cin >> n;

    vector<ll> a;

    if (n == 2 || n == 3)
    {
        cout << "NO SOLUTION\n";
        exit(0);
    }

    for (ll i = 2; i <= n; i += 2)
        a.push_back(i);

    for (ll i = 1; i <= n; i += 2)
        a.push_back(i);

    for (ll i : a)
        cout << i << " ";
    cout << '\n';
    return 0;
}
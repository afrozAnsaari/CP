#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<string> D(m);
    vector<string> C(n);
    unordered_map<string, int> mp;
    int ans = 0;
    int df = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> C[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> D[i];
    }
    cin >> df;
    for (int i = 0; i < m; i++)
    {
        cin >> mp[D[i]];
    }

    for (int i = 0; i < n; i++)
    {
        if (mp.find(C[i]) == mp.end())
        {
            ans += df;
            continue;
        }
        ans += mp[C[i]];
    }
    cout << ans << '\n';
    return 0;
}
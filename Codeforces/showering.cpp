#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, s, m;
        cin >> n >> s >> m;
        int sum = 0;
        vector<pair<int, int>> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i].first >> v[i].second;

        bool can = false;
        if (v[0].first >= s)
            can = true;

        for (int i = 1; i < n; i++)
        {
            if (v[i].first - v[i - 1].second >= s)
                can = true;
        }

        if (m - v[n - 1].second >= s)
            can = true;
        cout << (can ? "Yes" : "No") << '\n';
    }

    return 0;
}
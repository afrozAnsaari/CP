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
        int n, k, p, m, sum = 0, ans = 0;
        cin >> n >> k >> p >> m;
        vector<int> a(n);

        for (int &i : a)
            cin >> i;

        if (p <= k)
        {
            m = m - a[p - 1];
            ++ans;
            sum += a[p - 1];
            for (int i = k; i < n; i++)
            {
                sum += a[i];
            }
            ans += m / sum;
        }
        else
        {
            for (int i = k - 1; i < p; i++)
                sum += a[i];
            m -= sum;
            ans++;
            sum = 0;
            for (int i = k - 1; i < n; i++)
                sum += a[i];
            ans += m / sum;
        }
        cout << ans << '\n';
    }
    return 0;
}
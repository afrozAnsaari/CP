#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--)
    {
        int n, q;
        cin >> n >> q;

        vector<long long> a(n), b(n);
        for (auto &x : a)
            cin >> x;
        for (auto &x : b)
            cin >> x;

        while (q--)
        {
            int l, r;
            cin >> l >> r;
            --l;
            --r;

            long long cur = a[r];
            long long ans = cur;

            for (int i = r - 1; i >= l; --i)
            {
                cur = max(cur, b[i]);
                ans += cur;
            }

            cout << ans << '\n';
        }
    }
}

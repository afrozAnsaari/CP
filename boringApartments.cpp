#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if (!(cin >> t))
        return 0;
    while (t--)
    {
        string x;
        cin >> x;
        int d = x[0] - '0';
        int k = x.size();
        int ans = (d - 1) * 10 + k * (k + 1) / 2;
        cout << ans << '\n';
    }
    return 0;
}

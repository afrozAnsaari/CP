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
        vector<int> a(4);
        for (int &i : a)
            cin >> i;

        int ans = 0;
        for (int i : a)
            if (i > a[0])
                ans++;
        cout << ans << '\n';
    }
    return 0;
}
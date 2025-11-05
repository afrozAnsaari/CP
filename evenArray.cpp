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
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &i : a)
            cin >> i;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
            if ((a[i] & 1) != (i & 1))
                mp[i & 1]++;
        if (mp.size() == 1)
            cout << -1 << '\n';
        else if (mp[0] == mp[1])
            cout << mp[0] << '\n';
        else
            cout << -1 << '\n';
    }
    return 0;
}
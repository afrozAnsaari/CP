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
        vector<vector<int>> arr(n, vector<int>(n, 0));
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
                mp[arr[i][j]]++;
            }
        }
        bool ans = true;
        for (auto &p : mp)
        {
            if (p.second < 2 * n - 1)
            {
                ans = true;
                continue;
            }
            ans = false;
            break;
        }
        cout << (ans ? "Yes\n" : "No\n");
    }
    return 0;
}

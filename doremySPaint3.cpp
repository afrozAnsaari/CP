#include <bits/stdc++.h>
using namespace std;
int main(void)
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
        for (int i : a)
            mp[i]++;
        if (mp.size() >= 3)
            cout << "No" << '\n';
        else if (mp.size() == 1)
            cout << "Yes" << '\n';
        else
        {
            auto it = mp.begin();
            int f1 = it->second;
            it++;
            int f2 = it->second;
            if (abs(f1 - f2) <= 1)
                cout << "Yes\n";
            else
                cout << "No\n";
        }
    }
    return 0;
}
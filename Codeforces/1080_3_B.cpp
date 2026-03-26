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
        bool ans = true;
        for (int i = 0; i < a.size() / 2; i++)
        {
            if !(a[i] != i + 1 && a[2 * i + 1] != i + 1)
            {
                ans = false;
            }
        }
        cout << ((ans == true) ? "Yes\n" : "No\n");
    }
    return 0;
}
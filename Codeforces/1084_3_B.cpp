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
        int i = n - 1;
        while (i > 0 && a[i - 1] <= a[i])
        {
            i--;
        }
        cout << n - i << "\n";
    }
    return 0;
}
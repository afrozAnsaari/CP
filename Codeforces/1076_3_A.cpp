#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int s, n, x, sum = 0;
        cin >> n >> s >> x;
        int a[n] = {0};
        for (int &i : a)
            cin >> i;
        for (int i : a)
            sum += i;
        if (s == sum)
        {
            cout << "Yes\n";
        }
        else if (sum > s)
        {
            cout << "No\n";
        }
        else if (((s - sum) % x) == 0)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }
    return 0;
}

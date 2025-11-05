#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int &i : a)
        cin >> i;
    int ans = 0;
    for (int i : a)
    {
        if (i <= 5 - k)
        {
            ++ans;
        }
    }
    cout << ans / 3 << '\n';
    return 0;
}
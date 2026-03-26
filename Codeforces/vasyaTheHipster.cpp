#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    int a, b;
    cin >> a >> b;
    int after = abs(a - b) / 2;
    int ans = min(a, b);
    cout << ans << ' ' << after << '\n';
    return 0;
}
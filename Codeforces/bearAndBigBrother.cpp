#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    int i = 0;
    while (n <= m)
    {
        n = 3 * n;
        m = 2 * m;
        ++i;
    }
    cout << i << '\n';
    return 0;
}
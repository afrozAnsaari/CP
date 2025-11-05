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
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        (a == b && b == c && c == d) ? cout << "Yes\n" : cout << "No\n";
    }
    return 0;
}
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
        int a, b;
        cin >> a >> b;

        if (((a + 2 * b) & 1))
            cout << "No" << '\n';
        else if (a == 0 && (b & 1))
            cout << "No" << '\n';
        else if ((a & 1) && b == 0)
            cout << "No" << '\n';
        else
            cout << "Yes" << '\n';
    }

    return 0;
}
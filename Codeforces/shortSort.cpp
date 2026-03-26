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
        string s;
        cin >> s;
        if (s[0] == 'a' || s[1] == 'b' || s[2] == 'c')
            cout << "Yes" << '\n';
        else
            cout << "No" << '\n';
    }
    return 0;
}
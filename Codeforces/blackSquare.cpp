#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    vector<int> a(4);
    for (int &i : a)
        cin >> i;
    string s;
    cin >> s;
    int n = s.size();
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans + (int)(a[s[i] - '1']);
    }
    cout << ans << nl;
    return 0;
}
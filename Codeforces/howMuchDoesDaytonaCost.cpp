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
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int &i : a)
            cin >> i;
        int isK = 0;
        for (int i : a)
        {
            if (i == k)
                isK = 1;
        }
        if (isK)
            cout << "Yes" << '\n';
        else
            cout << "No" << '\n';
    }
    return 0;
}
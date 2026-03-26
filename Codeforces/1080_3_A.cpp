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
        bool found = false;
        for (int i : a)
        {
            if (i == 67)
            {
                found = true;
                break;
            }
        }
        cout << (found ? "yes\n" : "no\n");
    }
}

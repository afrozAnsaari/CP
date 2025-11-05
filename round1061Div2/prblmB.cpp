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
        int n, q;
        cin >> n >> q;
        string mac;
        cin >> mac;
        vector<int> a(q);
        for (int &i : a)
            cin >> i;
        for (int i = 0; i < q; i++)
        {
            int count = 0;
            int idx = 0;
            while (a[i])
            {
                if (mac[idx] == 'A')
                    a[i]--;
                else
                    a[i] /= 2;
                idx = (idx + 1) % n;
                count++;
            }
            cout << count << '\n';
        }
    }
    return 0;
}
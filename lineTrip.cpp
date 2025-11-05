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
        int n, x;
        cin >> n >> x;
        vector<int> v;
        v.push_back(0);
        for (int i = 0; i < n; i++)
        {
            int input;
            cin >> input;
            v.push_back(input);
        }
        v.push_back(x);
        int size = v.size();
        int max_size = INT_MIN;
        for (int i = 1; i < size; i++)
        {
            if (i == size - 1)
            {
                max_size = max(max_size, 2 * (v[i] - v[i - 1]));
            }
            else
            {
                max_size = max(max_size, v[i] - v[i - 1]);
            }
        }
        cout << max_size << '\n';
    }
    return 0;
}
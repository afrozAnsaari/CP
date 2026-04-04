#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(3 * n, 0);
        int k = 0, p = 0;
        for (int i = 0; i < n; i++)
        {
            p = 3 * i;
            arr[p] = i + 1;
            arr[p + 1] = arr[p] + n + k;
            arr[p + 2] = arr[p + 1] + 1;
            ++k;
        }
        for (int i : arr)
            cout << i << ' ';
        cout << '\n';
    }
    return 0;
}
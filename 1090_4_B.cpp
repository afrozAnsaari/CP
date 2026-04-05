#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int maxInt = INT_MIN, sum = 0;
        vector<int> a(7);
        for (int &i : a)
            cin >> i;
        for (int i : a)
        {
            maxInt = max(maxInt, i);
            sum += i;
        }
        sum -= maxInt;
        maxInt -= sum;
        cout << maxInt << '\n';
    }
    return 0;
}

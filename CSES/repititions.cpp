#include <bits/stdc++.h>

using ll = unsigned long long;

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    ll sum = 1, msum = 0;

    char x = 0;

    vector<char> a;
    while (cin >> x)
        a.push_back(x);

    for (ll i = 0; i + 1 < a.size(); i++)
    {
        if (a[i] == a[i + 1])
        {
            ++sum;
        }
        else
        {
            msum = max(sum, msum);
            sum = 1;
        }
    }
    msum = max(sum, msum);

    cout << msum << '\n';
    return 0;
}
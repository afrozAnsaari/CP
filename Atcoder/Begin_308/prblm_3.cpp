#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<array<long long, 3>> v;

    for (int i = 1; i <= N; i++)
    {
        long long A, B;
        cin >> A >> B;
        v.push_back({A, B, i});
    }

    sort(v.begin(), v.end(), [](auto &x, auto &y)
         {
        long long lhs = x[0] * (y[0] + y[1]);
        long long rhs = y[0] * (x[0] + x[1]);

        if (lhs != rhs) return lhs > rhs;
        return x[2] < y[2]; });

    for (auto &p : v)
        cout << p[2] << " ";

    cout << '\n';

    return 0;
}

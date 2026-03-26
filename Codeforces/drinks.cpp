#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &p : a)
        cin >> p;
    float sum = 0.0;
    for (int i : a)
    {
        sum = sum + (i / 100.0);
    }
    cout << (sum / n) * 100 << '\n';
    return 0;
}
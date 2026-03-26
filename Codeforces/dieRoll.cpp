#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    int Y, W;
    cin >> Y >> W;
    int D = max(W, Y);
    int num = 7 - D;
    int den = 6;
    int g = gcd(num, den);
    num /= g;
    den /= g;
    cout << num << '/' << den << '\n';
    return 0;
}
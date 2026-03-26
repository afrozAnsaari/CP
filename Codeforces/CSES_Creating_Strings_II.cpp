#include <bits/stdc++.h>
using namespace std;

static const long long MOD = 1000000007;
static const int MAXN = 1e6 + 5;

long long fact[MAXN], invFact[MAXN];

long long power(long long a, long long b)
{
    long long res = 1;
    while (b)
    {
        if (b & 1)
            res = res * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return res;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int n = s.size();

    // Precompute factorials
    fact[0] = 1;
    for (int i = 1; i <= n; i++)
        fact[i] = fact[i - 1] * i % MOD;

    // Precompute inverse factorials
    invFact[n] = power(fact[n], MOD - 2);
    for (int i = n; i > 0; i--)
        invFact[i - 1] = invFact[i] * i % MOD;

    vector<int> freq(26, 0);
    for (char c : s)
        freq[c - 'a']++;

    long long ans = fact[n];
    for (int f : freq)
        ans = ans * invFact[f] % MOD;

    cout << ans << "\n";
}

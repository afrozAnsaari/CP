#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string str;
    string ans;
    cin >> str;
    map<char, int> mp;
    mp = {{'1', 0}, {'2', 0}, {'3', 0}};
    for (char c : str)
            if (c != '+')
            mp[c]++;    
    for (auto &p : mp)
    {
        for (int i = 0; i < p.second; i++)
        {
            ans.push_back(p.first);
            ans.push_back('+');
        }
    }
    if (!ans.empty())
        ans.pop_back();
    cout << ans << '\n';
    return 0;
}
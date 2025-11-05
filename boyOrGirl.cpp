#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string str;
    cin >> str;
    unordered_map<char, int> mp;
    for (char c : str)
    {
        mp[c]++;
    }
    if (!(mp.size() & 1))
        cout << "CHAT WITH HER!" << '\n';
    else
        cout << "IGNORE HIM!" << '\n';
    return 0;
}
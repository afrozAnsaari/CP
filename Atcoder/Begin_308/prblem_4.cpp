#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int h, w;
    cin >> h >> w;
    char sn[h][w];

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            cin >> sn[i][j];
        }
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int t = 0;
    bool a = true, b = true;
    int arr[8] = {0};

    while (t < 8)
    {
        cin >> arr[t];

        if (arr[t] % 25 != 0 || arr[t] < 100 || arr[t] > 675)
            b = false;

        t++;
    }

    t = -1;
    while (++t < 7)
    {
        if (arr[t] > arr[t + 1])
        {
            a = false;
            break;
        }
    }

    cout << ((a && b ) ? "Yes" : "No") << '\n';
    return 0;
}

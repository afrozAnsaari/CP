#include <stdio.h>
#include <iostream>
using namespace std;
int main(void)
{
    int nTest;
    cin >> nTest;

    for (int i = 0; i < nTest; i++)
    {
        int n;
        cin >> n;

        int a[n];
        
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int countM1 = 0;
        int operations = 0;
        int lastM1 = -1;

        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                a[i]++;
                operations++;
            }
            else if (a[i] == -1)
            {
                countM1++;
                lastM1 = i;
            }
        }

        if (countM1 & 1)
        {
            a[lastM1] = 1;
            operations += 2;
        }

        std::cout << operations << endl;
    }

    return 0;
}

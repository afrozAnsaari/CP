#include <stdio.h>

int main(void)
{
    int x, n;
    int testN = 0;
    scanf("%d", &testN);

    for (int i = 0; i < testN; i++)
    {
        scanf("%d %d", &x, &n);
        if (n & 1)
        {
            printf("%d\n", x);
        }
        else
        {
            printf("%d\n", 0);
        }
        x = 0;
        n = 0;
    }
    return 0;
}

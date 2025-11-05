#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    if (!(n & 1) && n > 2)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}

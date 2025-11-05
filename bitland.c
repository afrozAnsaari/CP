#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x = 0, n;
    scanf("%d", &n);
    char str[4];
    for (int i = 0; i < n; i++)
    {
        scanf("%s", str);
        if (str[1] == '-')
            x--;
        else
            x++;
    }
    printf("%d", x);
    return 0;
}

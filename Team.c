#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);

    int arr[n][3];
    int count = 0, sum = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &arr[i][0], &arr[i][1], &arr[i][2]);
        sum = arr[i][0] + arr[i][1] + arr[i][2];
        if (sum >= 2)
            count++;
    }
    printf("%d\n", count);
    return 0;
}

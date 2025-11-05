#include <stdio.h>

int main(void)
{
    int n, k;
    int ans = 0;
    scanf("%d%d", &n, &k);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= arr[k - 1] && arr[i] > 0)
            ans++;
    }

    printf("%d", ans);

    return 0;
}
#include <stdio.h>

int main()
{
    int n, i;
    int sum = 0;
    int total, missing;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n - 1);

    for(i = 0; i < n - 1; i++)
    {
        int x;
        scanf("%d", &x);
        sum = sum + x;
    }

    total = n * (n + 1) / 2;

    missing = total - sum;

    printf("Missing number = %d", missing);

    return 0;
}
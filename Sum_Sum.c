#include <stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    int arr[n];
    int sumPositive = 0;
    int sumNegative = 0;
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 1; i <= n; i++)
    {
        if (arr[i] < 0)
        {
            sumNegative = sumNegative + arr[i];
        }
        else if (arr[i] > 0)
        {
            sumPositive = sumPositive + arr[i];
        }
    }
    printf("%d %d", sumPositive, sumNegative);
    return 0;
}
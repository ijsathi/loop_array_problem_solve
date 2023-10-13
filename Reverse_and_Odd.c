#include <stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    int array[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    for (i = n - 1; i >= 0; i--)
    {
        if (i % 2 == 1)
        {
            printf("%d ", array[i]);
        }
    }
    return 0;
}
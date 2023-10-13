#include <stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    if (n < 0)
    {
        for (i = n; i >= n; i++)
        {
            printf("%d ", i);
            if(i == 0){
                break;
            }
        }
    }
    else if (n > 0)
    {
        for (i = 1; i <= n; i++)
        {
            printf("%d ", i);
        }
    }
    else
    {
        printf("%d", i);
    }

    return 0;
}
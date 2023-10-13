#include <stdio.h>

int main()
{
    int n, x, v;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Input x & v
    scanf("%d %d", &x, &v);
    // Update array
    arr[x] = v;
    // Reverse the array
    int i = 0, j = n - 1;
    while (i < j)
    {
        int change = arr[i];
        arr[i] = arr[j];
        arr[j] = change;
        i++;
        j--;
    }
    // Output the reversed array
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

#include <stdio.h>

int main()
{
    int N, X, V;

    // Input N
    scanf("%d", &N);

    // Input array A
    int A[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    // Input X and V
    scanf("%d %d", &X, &V);

    // Update the array
    A[X] = V;

    // Reverse the array
    int i = 0, j = N - 1;
    while (i < j)
    {
        // Swap A[i] and A[j]
        int temp = A[i];
        A[i] = A[j];
        A[j] = temp;
        i++;
        j--;
    }

    // Output the reversed array
    for (int i = 0; i < N; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}

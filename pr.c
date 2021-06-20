#include <stdio.h>

int main(void)
{
    int A, N, X;
    scanf_s("%d %d", &N, &X);

    for (int i = 1; i <= N; i++)
    {
        scanf_s("%d", &A);
        if (A < X) printf("%d ", A);
    }

}
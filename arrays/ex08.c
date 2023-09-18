#include <stdio.h>

int main ()
{
       int L, C;
    printf("Enter the array dimansions:\n");
    scanf("%d", &L);
    scanf("%d", &C);
    int T[L][C];
    printf("Enter array elements: \n");
    int somme = 0;
    for (size_t i = 0; i < L; i++)
    {
        for (size_t j = 0; j < C; j++)
        {
            printf("T[%d][%d]:\n", i, j);
            scanf("%d", &T[i][j]);
        }
    }
    int A[L * C];
    int index = 0;
    for (int i = 0; i < L; i++) 
    {
        for (int j = 0; j < C; j++) {
            A[index] = T[i][j];
            index++;
        }
    }
    int i = 0;
    while (i < index)
    {
        printf("%d ", A[i]);
        i++;
    }
    return 0;
}
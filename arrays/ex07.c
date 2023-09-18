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
            somme += T[i][j];
        }
    }
    printf("Array T:\n");
    for (int i = 0; i < L; i++) 
    {
        for (int j = 0; j < C; j++) {
            printf("%d\t", T[i][j]);
        }
        printf("\n");
    }
    printf("The somme of all array elements is: %d", somme);
    return 0;
}
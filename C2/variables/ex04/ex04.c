#include <stdio.h>

int main ()
{
    int numa;
    int numb;
    int numc;
    int numd;
    int result;
    printf("Enter num1: \n");
    scanf("%d", &numa);
    printf("Enter num2: \n");
    scanf("%d", &numb);
    printf("Enter num3: \n");
    scanf("%d", &numc);
    printf("Enter num4: \n");
    scanf("%d", &numd);
    result = (numa + numb + numc + numd) / 3;
    printf("La moyenne est: %d", result);
    printf("La somme est: %d", (numa + numb + numc + numd));
    return 0;
}
#include <stdio.h>

int main ()
{
    int numa;
    int numb;
    int numc;
    int result;
    printf("Enter num1: \n");
    scanf("%d", &numa);
    printf("Enter num2: \n");
    scanf("%d", &numb);
    printf("Enter num3: \n");
    scanf("%d", &numc);
    result = (numa + numb + numc) / 3;
    printf("La moyenne est: %d", result);
    return 0;
}
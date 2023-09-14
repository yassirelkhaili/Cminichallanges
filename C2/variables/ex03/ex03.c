#include <stdio.h>

int main ()
{
    int a;
    int b;
    printf("Enter num a: \n");
    scanf("%d", &a);
    printf("Enter num b: \n");
    scanf("%d", &b);
    printf("the result of a / b is: %d\n", (a / b));
    printf("the result of a + b is: %d\n", (a + b));
    printf("the result of a - b is: %d\n", (a - b));
    printf("the result of a * b is %d\n", (a * b));
    printf("the result of a %% b is: %d\n", (a % b));
    return 0;
}
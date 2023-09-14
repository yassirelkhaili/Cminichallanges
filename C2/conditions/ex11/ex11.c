#include <stdio.h>

int ft_sum(int a, int b)
{
    return a + b;
}

int main ()
{
    int num1;
    int num2;
    printf("Enter the first num: \n");
    scanf("%d", &num1);
    printf("Enter the second num: \n");
    scanf("%d", &num2);
    printf("result: %d\n", (num1 == num2) ? (3 * ft_sum(num1, num2)) : ft_sum(num1, num2));
    return 0;
}
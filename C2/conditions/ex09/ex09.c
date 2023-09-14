#include <stdio.h>

int main ()
{
    int num;
    printf("Enter a number: \n");
    scanf("%d", &num);
    char *result = (num % 2) == 1 ? "The number is odd" : "The number is even";
    printf("%s", result);
    return 0;
}
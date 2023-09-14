#include <stdio.h>

int main ()
{
    int num;
    printf("Enter the number you wish to convert: \n");
    scanf("%d", &num);
    printf("Your number in Octal: %o\n", num);
    printf("Your number in Hexadecimal: %X\n", num);
    return 0;
}
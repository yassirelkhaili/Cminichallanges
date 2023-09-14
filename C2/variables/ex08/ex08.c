#include <stdio.h>

void toOctal(int octal)
{
    if(octal != 0)
        toOctal(octal / 8);
    if (octal % 8 != 0)
        printf("%d", (octal % 8));
}

void toHexa(int hexa)
{
    char hexadecimal[] = "0123456789ABCDEF";
    if(hexa != 0)
        toHexa(hexa / 16);
    if (hexa % 16 != 0)
        printf("%c", hexadecimal[hexa % 16]);
}

int main ()
{
    int num;
    char *result;
    printf("Enter a number: \n");
    scanf("%d", &num);
    printf("Number in octal: ");
    toOctal(num);
    printf("\n");
    printf("Number in hexadecimal: ");
    toHexa(num);
    return 0;
}
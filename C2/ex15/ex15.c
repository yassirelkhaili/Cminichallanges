#include <stdio.h>

int main ()
{
    char c;
    printf("Enter a random charracter \n");
    scanf("%c", &c);
    if (c >= 65 && c <= 90)
        printf("The charracter is uppercase \n");
    else
        printf("The charracter is lowercase \n");
    return 0;
}
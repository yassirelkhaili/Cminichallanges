#include <stdio.h>

int main ()
{
    int F;
    printf("Temp in Fahrenheit:");
    scanf("%d", &F);
    int C = (F - 32) / 1.8;
    if (C < 0)
        printf("Temperature is very cold");
    else if (C > 0 && C <= 16)
        printf("Temperature is cold");
    else if (C > 16 && C <= 30)
        printf("Temperature is hot");
    else 
        printf("Temperature is very hot");
    return 0;
}
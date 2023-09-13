#include <stdio.h>

int main ()
{
    int num;
    printf("Enter a num between 100 and 999: \n");
    scanf("%d", &num);
    if (num >= 100 && num <= 999)
    {
        printf("%d", (num % 10));
        num /= 10;
        printf("%d", (num % 10));
        num /= 10;
        printf("%d", (num % 10));
    }
    else 
    {
        return 1;
    }
    return 0;
}
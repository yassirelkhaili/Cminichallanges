#include <stdio.h>

int main ()
{
    int num;
    int index = 0;
    printf("Enter a number:");
    scanf("%d", &num);
    while (index <= 10)
    {
        printf("%d x %d = %d\n", num, index, (num * index));
        index++;
    }
    return 0;
}
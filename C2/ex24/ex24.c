#include <stdio.h>

int main ()
{
    int num;
    printf("Enter a number: \n");
    scanf("%d", &num);
    int length = 0;
    int temp = num;
    while (temp != 0)
    {
        temp /= 10;
        length++;
    }
    while(length != 0)
    {
        printf("%d", (num % 10));
        num /= 10;
        length--;
    }
    return 0;
}
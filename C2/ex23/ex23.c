#include <stdio.h>

int main ()
{
    int index = 1;
    int index3 = 6;
    while (index <= 7)
    {
        int index4 = index3;
        while(index4 != 0)
        {
            printf(" ");
            index4--;
        }
        int index2 = ((index - 1) * 2) + 1;
        while(index2 != 0)
        {
            printf("*");
            index2--;
        }
        printf("\n");
        index++;
        index3--;
    }
    return 0;
}
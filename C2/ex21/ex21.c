#include <stdio.h>

int main ()
{
    int maximum = 0;
    int sum;
    int value;
    do {
        printf("Enter a number between 1 and 100 or 0 to terminate the program:\n");
        scanf("%d", &value);
        if(value >= 1 && value < 100)
        {
            sum += value;
            if(value > maximum)
                maximum = value;
            printf("total: %d\n", sum);
            printf("maximum: %d\n", maximum);
        }
    } while (value != 0);
    return 0;
}

#include <stdio.h>

int main ()
{
    float r;
    printf("Enter the radius of the circle: \n");
    scanf("%f", &r);
    printf("The circomference is: %f", (r * 3.14159265359 * 2));
    return 0;
}
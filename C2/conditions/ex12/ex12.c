#include <stdio.h>
#include <math.h>

int main ()
{
    double a;
    double b;
    double c;
    double delta;
    printf("ax^2 + bx + c \n");
    printf("Enter the value of a: \n");
    scanf("%lf", &a);
    printf("Enter the value of b: \n");
    scanf("%lf", &b);
    printf("Enter the value of c: \n");
    scanf("%lf", &c);
    delta = b * b - 4 * a * c;
    if (delta == 0)
    {
        printf("Equation has a unique solution %lf \n", (-b / (2 * a)));
    } else if (delta > 0)
    {
        printf("Equation has 2 solutions %lf, %lf \n", ((-b + sqrt(delta)) / (2 * a)), ((-b - sqrt(delta)) / (2 * a)));
    } else 
        printf("Equation has no real solutions in the real number set (R) \n");
    return 0;
}
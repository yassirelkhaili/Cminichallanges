#include <stdio.h>
#include <math.h>

// int ft_sqrt(int a) {
//     if (a < 0)
//         return -1;     
//     int index = 0;
//     while (index * index <= a) {
//         if (index * index == a)
//             return index;
//         index++;
//     }
//     return -1;
// }


int ft_power(int a)
{
    return a * a;
}

int main ()
{
    int a;
    int b;
    int c;
    int d;
    int result;
    printf("Enter x1: \n");
    scanf("%d", &a);
    printf("Enter y1: \n");
    scanf("%d", &b);
    printf("Enter x2: \n");
    scanf("%d", &c);
    printf("Enter y2: \n");
    scanf("%d", &d);
    result = sqrt(ft_power(c - a) + ft_power(d - b));
    printf("The distance is: %d", result);
    return 0;
}
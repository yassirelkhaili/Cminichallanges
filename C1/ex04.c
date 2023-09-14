#include "myheader.h"

// cant be bothered to turn sum func to Variadic one

int main ()
{
    char *a = NULL;
    char *b = NULL;
    char *c = NULL;
    char *d = NULL;
    ft_putstr("Enter num a:");
    if(ft_malloc(&a))
        return 1;
    ft_putstr("Enter num b:");
    if(ft_malloc(&b))
        return 1;
    ft_putstr("Enter num c:");
    if(ft_malloc(&c))
        return 1;
    ft_putstr("Enter num d:");
    if(ft_malloc(&d))
        return 1;
    ft_putstr("The sum is: ");
    ft_putnbr(ft_sum(ft_sum(ft_atoi(a), ft_atoi(b)), ft_sum(ft_atoi(c), ft_atoi(d))));
    write(1, "\n", 1);
    ft_putstr("The average is: ");
    ft_putnbr(ft_sum(ft_sum(ft_atoi(a), ft_atoi(b)), ft_sum(ft_atoi(c), ft_atoi(d))) / 4);
    write(1, "\n", 1);
    return 0;
}

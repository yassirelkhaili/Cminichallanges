#include "myheader.h"

int main ()
{
    char *a;
    char *b;
    ft_putstr("Enter num a:");
    if(ft_malloc(&a))
        return 1;
    ft_putstr("Enter num b:");
    if(ft_malloc(&b))
        return 1;
    ft_putstr("a divided by b is: \n");
    ft_putnbr(ft_div(ft_atoi(a), ft_atoi(b)));
    ft_putnbr(ft_mod(ft_atoi(a), ft_atoi(b)));
    return 0;
}
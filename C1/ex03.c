#include "myheader.h"

int main ()
{
    char *a = NULL;
    char *b = NULL;
    ft_putstr("Enter num a:");
    if(ft_malloc(&a))
        return 1;
    ft_putstr("Enter num b:");
    if(ft_malloc(&b))
        return 1;
    ft_putstr("a / b = ");
    ft_putnbr(ft_div(ft_atoi(a), ft_atoi(b)));
    write(1, "\n", 1);
    ft_putstr("a % b = ");
    ft_putnbr(ft_mod(ft_atoi(a), ft_atoi(b)));
    write(1, "\n", 1);
    ft_putstr("a + b = ");
    ft_putnbr(ft_sum(ft_atoi(a), ft_atoi(b)));
    write(1, "\n", 1);
    ft_putstr("a - b = ");
    ft_putnbr(ft_sub(ft_atoi(a), ft_atoi(b)));
    write(1, "\n", 1);
    free(a);
    free(b);
    return 0;
}
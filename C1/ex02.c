#include "myheader.h"

int main ()
{
    char *numchar = NULL;
    float C;
    ft_putstr("Temperature in Fahrenheit:");
    if (ft_malloc(&numchar))
        return 1;
    C = (ft_atof(numchar) - 32) / 1.8;
    if (C < 0)
        ft_putstr("Temperature is very cold");
    else if (C > 0 && C <= 16)
        ft_putstr("Temperature is cold");
    else if (C > 16 && C <= 30)
        ft_putstr("Temperature is hot");
    else 
        ft_putstr("Temperature is very hot");
    return 0;
}
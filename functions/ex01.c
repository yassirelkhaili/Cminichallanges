#include <unistd.h>

void ft_putstr(char *str)
{
    while(*str)
        write(1, str++, 1);
}

void bonjour()
{
    ft_putstr("Youcode");
}

// int main ()
// {
//     bonjour();
//     return 0;
// }
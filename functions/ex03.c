#include <unistd.h>

int ft_atoi(char *str)
{
    int sign = 1;
    int result = 0;

    while (*str == ' ' || (*str >= 9 && *str <= 13)) {
        str++;
    }

    while (*str)
    {
        if(*str == '-' || *str == '+')
        {
            if (*str == '-')
                sign *= -1;
        }
        if(*str >= 48 && *str <= 57)
            result = (result * 10) + (*str - 48);
        str++;
    }
    return (result * sign);
}

void ft_putstr(char *str)
{
    while(*str)
        write(1, str++, 1);
}

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        ft_putstr("only 2 arguments are allowed\n");
        return 1;
    }
    int num1 = ft_atoi(argv[1]);
    int num2 = ft_atoi(argv[2]);
    
    return 0;
}

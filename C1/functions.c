#include "myheader.h"

int ft_malloc(char **name)
{
    int length = 0;
    char ch;
    *name = NULL;
    while ((ch = getchar()) != '\n' && ch != EOF)
    {
        *name = (char *)realloc(*name, (length + 1) * sizeof(char));
        if (*name == NULL)
        {
            ft_putstr("Memory allocation failure");
            return 1;
        }
        (*name)[length] = ch;
        length++;
    }
    (*name)[length] = '\0';
    return 0; 
}

void ft_putstr(char *str)
{
    char *ptr = str;
    while (*ptr)
        write(1, ptr++, 1);
    write(1, "\n", 1);
}

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

double ft_atof(const char *str)
{
    double sign = 1.0;
    double result = 0.0;
    double decimal = 0.1;
    int isDecimal = 0;

    while (*str == ' ' || (*str >= 9 && *str <= 13)) {
        str++;
    }
    while (*str) {
        if(*str == '-' || *str == '+')
        {
            if (*str == '-')
                sign *= -1;
        }
        if (*str >=  48 && *str <= 57) {
            if (!isDecimal) {
                result = (result * 10.0) + (*str - '0');
            } else {
                result += (*str - '0') * decimal;
                decimal *= 0.1;
            }
        } else if (*str == '.') {
            isDecimal = 1;
        }
        str++;
    }

    return (result * sign);
}

int ft_div(int a, int b)
{
int result = a / b;
return result;
}

int ft_mod(int a, int b)
{
int result = a % b;
return result;
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nbr)
{
    char result;
    if (nbr == -2,147,483,648)
    {
        ft_putchar("-2,147,483,648");
        return 0;
    }
    if (nbr < 0)
    {
        nbr *= -1;
        ft_putnbr(-nbr);
    } else 
    {
        ft_putnbr(nbr / 10);
        result = (nbr % 10) + 48;
        ft_putstr(result);
    }
}


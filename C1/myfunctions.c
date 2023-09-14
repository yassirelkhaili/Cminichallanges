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
return a / b;
}

int ft_mod(int a, int b)
{
return a % b;
}

int ft_sum(int a, int b)
{
return a + b;
}

int ft_mult(int a, int b)
{
    return a * b;
}

int ft_strlen(char *str)
{
    int strlen = 0;
    while (*str)
    {
        str++;
        strlen++;
    }
    return strlen;
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char	out;

	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
		return ;
	}
	if (nb == 0)
	{
		write (1, "0", 1);
	}
	else if (nb < 0)
	{
		write (1, "-", 1);
		ft_putnbr(-nb);
	}
	else
	{
		if (nb / 10 != 0)
			ft_putnbr(nb / 10);
		out = (nb % 10) + 48;
		write(1, &out, 1);
	}
}


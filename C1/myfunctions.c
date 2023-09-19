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
    *name = (char *)realloc(*name, (length + 1) * sizeof(char));
    if (*name == NULL)
        {
            ft_putstr("Memory allocation failure");
            return 1;
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

int ft_strcmp(char *s1, char*s2)
{
    while(*s1 && *s2 && *s1 == *s2)
    {
        s1++;
        s2++;
    }
    return (*s1 - *s2);
}

void putarr(int *nums, int size)
{
     int index = 0;
    ft_putstr("Array = {");
    while (index < size)
    {
        ft_putnbr(nums[index]);
        if(index != size - 1)
        ft_putstr(", ");
        index++;
    }
    ft_putstr("}");
}

char *ft_strcpy(char *dest, char *src)
{
    while(*src)
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return dest;
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

int ft_power(int a)
{
    return a * a;
}

int ft_sub(int a, int b)
{
    return a - b;
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

void bubblesort(int *arr, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int binarysearch(int *arr, int target, int start, int end)
{
    if (start > end)
    {
        printf("Error 404 not found\n");
        return (-1);
    }
    int middle = (start + end) / 2;
    if(arr[middle] == target)
    {
        printf("Target found at index: %d \n", middle);
        return middle;
    }
    if(arr[middle] < target)
        return binarysearch(arr, target, middle + 1, end);
    if(arr[middle] > target)
        return binarysearch(arr, target, start, middle - 1);
}


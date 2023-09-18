#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void ft_putstr(char *str)
{
    char *ptr = str;
    while (*ptr)
        write(1, ptr++, 1);
    write(1, "\n", 1);
}

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

int main ()
{
    char *string = NULL;
    int *nums = NULL;
    int index = 0;
    printf("Enter grades between 0 and 20 seperated by space, if input is outside this range the program will stop.\n");
    if(ft_malloc(&string))
        return 1;
    int strlen = ft_strlen(string);
    nums = (int *)malloc(strlen * sizeof(int));
            while (*string)
            {
                int number = 0;
                while (*string >= 48 && *string <= 57)
                {
                    number = (number * 10) + (*string - 48);
                    string++;
                }
                nums[index] = number;
                index++;
                if (*string)
                    string++;
            }
    int i = 0;
    while (i < index)
    {
        if (nums[i] == 0)
        {
            printf("grade cannot be 0\n");
            int j = 0;
            while(j < index)
            {
                printf("%d ", nums[j]);
                j++;
            }
            free(string);
            free(nums);
            return 1;
        }
        if (nums[i] < 0 || nums[i] > 20)
        {
            free(string);
            free(nums);
            return 1;
        }
        i++;
    }
    printf("all good");
    free(string);
    free(nums);
    return 0;
}
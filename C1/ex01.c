#include "myheader.h"

int main()
{
    char *first_name = NULL;
    char *last_name = NULL;
    char *age_str = NULL;

    ft_putstr("Please write your firstname:");
    if (!ft_malloc(&first_name))
    {
        ft_putstr("Please write your lastname:");
        if (!ft_malloc(&last_name))
        {
            ft_putstr("Please write your age:");
            if (!ft_malloc(&age_str))
            {
                ft_putstr("Your information:");
                ft_putstr("First Name: ");
                ft_putstr(first_name);
                ft_putstr("Last Name: ");
                ft_putstr(last_name);
                ft_putstr("Age: ");
                ft_putstr(age_str);

                free(first_name);
                free(last_name);
                free(age_str);

                return 0;
            }
        }
    }

    return 1;
}

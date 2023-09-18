#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

 typedef struct
    {
        char *name;
        int quantity;
        int price;
        int pricettc;
    } Product;

void get_user_choice(int *user_choice)
{
    int choice;
    printf("Choose an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Power\n");
    printf("5. Division\n");
    printf("6. Modulus (remainder)\n");
    printf("7. Square Root\n");
    printf("8. Arrays\n");
    printf("9. Exit\n");
    scanf("%d", &choice);
    *user_choice = choice;
}

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
    getchar();
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

int main ()
{
    int user_choice;
    Product products[100];
    int index = 0;
    do
    {
        get_user_choice(&user_choice);
        char *name = NULL;
        switch (user_choice)
        {
            case 1:
            printf("Name: ");
            if(ft_malloc(&name))
                return 1;
            products[index].name = name;
            printf("%s\n", products[index].name);
            index++;
            break;
            default:
            printf("Invalid input\n");
            break;
        }
    } while (user_choice != 9);
    return 0;
}
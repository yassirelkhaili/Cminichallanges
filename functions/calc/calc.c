#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <unistd.h>

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

int ft_sub(int a, int b)
{
    return a - b;
}

int ft_root(int a)
{
    return sqrt(a);
}

int ft_power(int a, int pow)
{
    int result = 1;
    while(pow--)
        result *= a;
    return result;
}

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

void arr_menu(int *arr_choice)
{
     int choice;
    printf("Choose an operation:\n");
    printf("1. Min\n");
    printf("2. Max\n");
    printf("3. Average\n");
    printf("4. Back\n");
    scanf("%d", &choice);
    *arr_choice = choice;
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
            printf("Memory allocation failure");
            return 1;
        }
        (*name)[length] = ch;
        length++;
    }
    *name = (char *)realloc(*name, (length + 1) * sizeof(char));
    if (*name == NULL)
        {
            printf("Memory allocation failure");
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
        strlen++;
        str++;
    }
    return strlen;
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

int main ()
{
    int user_choice;
    int arr_choice;
    get_user_choice(&user_choice);
    do {
        int num1;
        int num2;
        switch (user_choice)
        {
            case 1:
            printf("Enter number 1:\n");
            scanf("%d", &num1);
            printf("Enter number 2:\n");
            scanf("%d", &num2);
            printf("Result: %d\n", ft_sum(num1, num2));
            printf("----End of Operation----\n");
            get_user_choice(&user_choice);
            break;
            case 2:
            printf("Enter number 1:\n");
            scanf("%d", &num1);
            printf("Enter number 2:\n");
            scanf("%d", &num2);
            printf("Result: %d\n", ft_sub(num1, num2));
            printf("----End of Operation----\n");
            get_user_choice(&user_choice);
            break;
            case 3:
            printf("Enter number 1:\n");
            scanf("%d", &num1);
            printf("Enter number 2:\n");
            scanf("%d", &num2);
            printf("Result: %d\n", ft_mult(num1, num2));
            printf("----End of Operation----\n");
            get_user_choice(&user_choice);
            break;
            case 4:
            printf("Enter number 1:\n");
            scanf("%d", &num1);
            printf("Enter the power:\n");
            scanf("%d", &num2);
            printf("Result: %d\n", ft_power(num1, num2));
            printf("----End of Operation----\n");
            get_user_choice(&user_choice);
            break;
            case 5:
            printf("Enter number 1:\n");
            scanf("%d", &num1);
            printf("Enter number 2:\n");
            scanf("%d", &num2);
            printf("Result: %d\n", ft_div(num1, num2));
            printf("----End of Operation----\n");
            get_user_choice(&user_choice);
            break;
            case 6:
            printf("Enter number 1:\n");
            scanf("%d", &num1);
            printf("Enter number 2:\n");
            scanf("%d", &num2);
            printf("Result: %d\n", ft_mod(num1, num2));
            printf("----End of Operation----\n");
            get_user_choice(&user_choice);
            break;
            case 7:
            printf("Enter a number:\n");
            scanf("%d", &num1);
            printf("Result: %d\n", ft_root(num1));
            printf("----End of Operation----\n");
            get_user_choice(&user_choice);
            break;
            case 8:
            if(arr_choice != 4)
                arr_menu(&arr_choice);
            do
            {
            char *string = NULL;
            int *nums = NULL;
            int index = 0;
            int size = 0;
            int strlen = 0;
            switch(arr_choice)
            {
            case 1:
            printf("Enter a string of numbers seperated by spaces and/or charracters:\n");
            getchar();
            if (ft_malloc(&string))
            {
                printf("An error has occurred. Please check your input and try again.\n");
                return 1;
            }
            strlen = ft_strlen(string);
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
            bubblesort(nums, index);
            printf("The smallest element in the array is: %d\n", nums[0]);
            free(string);
            free(nums);
             printf("----End of Operation----\n");
             arr_menu(&arr_choice);
            break;
            case 2:
            printf("Enter a string of numbers seperated by spaces and/or charracters:\n");
            getchar();
            if (ft_malloc(&string))
            {
                printf("An error has occurred. Please check your input and try again.\n");
                return 1;
            }
            strlen = ft_strlen(string);
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
            bubblesort(nums, index);
            printf("The biggest element in the array is: %d\n", nums[index - 1]);
            free(string);
            free(nums);
             printf("----End of Operation----\n");
             arr_menu(&arr_choice);
            break;
            case 3:
            printf("Enter a string of numbers seperated by spaces and/or charracters:\n");
            getchar();
            if (ft_malloc(&string))
            {
                printf("An error has occurred. Please check your input and try again.\n");
                return 1;
            }
            strlen = ft_strlen(string);
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
            int total = 0;
            int i = 0;
            while (i < index)
            {
                total += nums[i];
                i++;
            }
            printf("The avarage value of all elements in the array is: %d\n", (total / 2));
            free(string);
            free(nums);
             printf("----End of Operation----\n");
             arr_menu(&arr_choice);
            break;
            case 4:
            get_user_choice(&user_choice);
            break;
            default:
            printf("invalid choice\n");
            break;
            }
            } while (arr_choice != 4);
            break;
            default:
            printf("Invalid choice\n");
            break;
        }
    } while(user_choice != 9);
    printf("----End of Program----");
    return 0;
}
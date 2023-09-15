#include <stdio.h>
#include <math.h>

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
    printf("8. Exit\n");
    scanf("%d", &choice);
    *user_choice = choice;
}

int main ()
{
    int user_choice;
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
            default:
            printf("Invalid choice\n");
            break;
        }
    } while(user_choice != 8);
    printf("----End of Program----");
    return 0;
}
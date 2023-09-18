#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct {
    char *name;
    int age;
} Person;

int ft_malloc(char **name)
{
    int length = 0;
    char ch;
    *name = NULL;
    while ((ch = getchar()) != '\n' && ch != EOF)
    {
        *name = (char *)realloc(*name, (length + 1) * sizeof(char));
        if (*name == NULL)
            return 1;
        (*name)[length] = ch;
        length++;
    }
    *name = (char *)realloc(*name, (length + 1) * sizeof(char));
    if (*name == NULL)
            return 1;
    (*name)[length] = '\0';
    return 0; 
}

int main ()
{
    Person *people = NULL;
    int user_choice;
    printf("Enter new user info and press 0 to stop");
    scanf("%d", &user_choice);
    do 
    {
        Person new_person;
        printf("Enter person name: \n");
        if(ft_malloc(&new_person.name))
        {
            perror("Memory allocation failure");
            exit(EXIT_FAILURE);
        }
        printf("Enter person age: \n");
        scanf("%d", new_person.age);
    } while (user_choice != 0);
    return 0;
}




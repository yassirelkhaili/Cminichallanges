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

int ft_strcmp(char *s1, char*s2)
{
    while(*s1 && *s2 && *s1 == *s2)
    {
        s1++;
        s2++;
    }
    return (*s1 - *s2);
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

void get_user_choice(int *user_choice)
{
    int choice;
    printf("\n===========================================\n");
        printf("            Application Menu\n");
        printf("===========================================\n\n");
        printf("[1] Display data\n");
        printf("[2] Add data\n");
        printf("[3] Search for data\n");
        printf("[4] Delete data\n");
        printf("[5] Remove duplicate data\n");
        printf("[6] Generate wordlist\n");
        printf("[7] Quit\n");
        printf("\nEnter your choice [1-7]:\n");
        scanf("%d", &choice);
    *user_choice = choice;
}

int main ()
{
    int user_choice;
    int wordcount = 0;
    char *wordlist[] = NULL;
    get_user_choice(&user_choice);
    do
    {
        switch (user_choice)
        {
            case 1:
            int index = 0;
            while (index < wordcount)            
            {
                printf("Available data:\n");
                printf("%s\n", wordlist[index]);
                index++;
            }
            get_user_choice(&user_choice);
            break;
            case 2:
            char *str = NULL;
            char **wordlist = (char **)realloc(wordlist, (wordcount + 1) * sizeof(char *));
            printf("Enter the word:\n");
            if(ft_malloc(&str))
            {
                perror("Mem alloc error check input");
                exit(EXIT_FAILURE);
            }
            ft_strcpy(wordlist[wordcount], str);
            wordlist = (char **)realloc(wordlist, (wordcount + 1) * sizeof(char *));
            if (wordlist == NULL)
            {
                perror("Mem alloc error check input");
                exit(EXIT_FAILURE);
            }
            wordlist[wordcount + 1] = '\0';
            wordcount++;
            get_user_choice(&user_choice);
            break;
            case 3:
            get_user_choice(&user_choice);
            break;
            case 4:
            get_user_choice(&user_choice);
            break;
            case 5:
            get_user_choice(&user_choice);
            break;
            case 6:
            get_user_choice(&user_choice);
            break;
            default:
            printf("Invalid choice\n");
            break;
        }
    } while (user_choice != 7);
    return 0;
}
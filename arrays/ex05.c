#include <stdio.h>
#include <stdlib.h>

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

int ft_strlen(char *ptr)
{
    int strlen = 0;
    while (*ptr)
    {
        strlen++;
        ptr++;
    }
    return strlen;
}

int main ()
{
    char *name = NULL;
    int strlen = 0;
    printf("Enter your name: \n");
    if (ft_malloc(&name))
    {
        perror("Memory allocation failure");
        exit(EXIT_FAILURE);
    }
    strlen = ft_strlen(name);
    printf("Your name is %d charrcters long.", strlen);
    return 0;
}

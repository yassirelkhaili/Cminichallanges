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

//Quel ministre sot! XD

int main ()
{
    char *string = NULL;
    int index = 0;
    int m_pos;
    int s_pos;
    char temp;
    char ch;
    printf("Enter a string: \n");
    if (ft_malloc(&string))
    {
        perror("Memory allocation failure");
        exit(EXIT_FAILURE);
    }
    char *ptr = string;
    int mfound = 0;
    int sfound = 0;
    while (*ptr)
    {
        if(*ptr == 'm' && !mfound)
        {
            m_pos = index;
            *ptr = 's';
            mfound = 1;
        }
        if(*ptr == 's' && !sfound)
        {
            s_pos = index;
            *ptr = 'm';
            sfound = 1;
        }
        index++;
        ptr++;
    }
    printf("m is found in position %d\n", m_pos);
    printf("s is found in position %d\n", s_pos);
    printf("New string is: %s\n", string);
    printf("Enter a random charracter: \n");
    ch = getchar();
    ptr = string;
    index = 0;
    while (*ptr)
    {
        if(*ptr == ch)
        {
            printf("%c was found at position %d", ch, index);
            return 0;
        }
        index++;
        ptr++;
    }
    printf("Charracter was not found");
    return 1;
}
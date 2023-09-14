#include <stdio.h>

int main ()
{
    char c;
    printf("Enter a single charracter: \n");
    scanf("%c", &c);
    switch(c) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'y':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'Y':
            printf("The character is a vowel\n");
            break;
        default:
            printf("The character is not a vowel\n");
    }
    return 0;
}
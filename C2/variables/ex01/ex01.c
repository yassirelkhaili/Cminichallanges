#include <stdio.h>

int main() {
    char nom[50], prenom[50];
    int age;

    printf("Entrez votre nom : ");
    scanf("%s", nom);

    printf("Entrez votre prénom : ");
    scanf("%s", prenom);

    printf("Entrez votre âge : ");
    scanf("%d", &age);

    printf("Nom : %s\n", nom);
    printf("Prénom : %s\n", prenom);
    printf("Âge : %d ans\n", age);

    return 0;
}

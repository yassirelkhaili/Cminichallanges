#include <stdio.h>

int main() {
        int year, choice;
        char *name;
        printf("Enter a year: \n");
        scanf("%d", &year);
        name = year == 1 ? "year" : "years";
        printf("Conversion Menu:\n");
        printf("1. Convert to months\n");
        printf("2. Convert to days\n");
        printf("3. Convert to hours\n");
        printf("4. Convert to minutes\n");
        printf("5. Convert to seconds\n");
        printf("Enter your choice: \n");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("%d %s = %d months\n", year, name, year * 12);
                break;
            case 2:
                printf("%d %s = %d days\n", year, name, year * 365);
                break;
            case 3:
                printf("%d %s = %d hours\n", year, name, year * 365 * 24);
                break;
            case 4:
                printf("%d %s = %d minutes\n", year, name, year * 365 * 24 * 60);
                break;
            case 5:
                printf("%d %s = %d seconds\n", year, name, year * 365 * 24 * 60 * 60);
                break;
            default:
                printf("Invalid choice.\n");
                return 1;
        }
    return 0;
}

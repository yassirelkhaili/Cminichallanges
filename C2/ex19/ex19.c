#include <stdio.h>
#include <string.h>

int main() {
    char date[11];
    int day, index, year;
    printf("Enter a date in the format (dd/mm/yyyy): \n");
    scanf("%s", date);
    sscanf(date, "%d/%d/%d", &day, &index, &year);
    char *months[] = {"January", "February", "March", "April", "May", "June", "July",
                      "August", "September", "October", "November", "December"};
    if (index >= 1 && index <= 12) {
        printf("%02d-%s-%d\n", day, months[index - 1], year);
    } else {
        printf("Invalid month.\n");
        return 1;
    }
    return 0;
}

#include <stdio.h>

int main() {
    double average;

    printf("Enter the student's average score: ");
    scanf("%lf", &average);

    if (average < 10) {
        printf("The student has failed.\n");
    } else if (average >= 10 && average < 12) {
        printf("The student has passed with a 'Satisfactory' grade.\n");
    } else if (average >= 12 && average < 14) {
        printf("The student has passed with an 'Fairly Good' grade.\n");
    } else if (average >= 14 && average < 16) {
        printf("The student has passed with a 'Good' grade.\n");
    } else if (average >= 16) {
        printf("The student has passed with a 'Very good' grade.\n");
    } else {
        printf("Invalid input.\n");
        return 1;
    }

    return 0;
}

#include <stdio.h>

int main() {
    double average;
    printf("Enter the student's average score: ");
    scanf("%lf", &average);
    if (average < 10) {
        printf("The student is failed (recalé).\n");
    } else if (average >= 10 && average < 12) {
        printf("The student passed with a 'passable' grade.\n");
    } else if (average >= 12 && average < 14) {
        printf("The student passed with an 'assez bien' grade.\n");
    } else if (average >= 14 && average < 16) {
        printf("The student passed with a 'bien' grade.\n");
    } else if (average >= 16) {
        printf("The student passed with a 'très bien' grade.\n");
    } else {
        printf("Invalid input.\n");
        return 1;
    }
    return 0;
}

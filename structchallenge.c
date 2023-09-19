#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Dob {
    int day;
    int month;
    int year;
};

typedef struct {
    char fname[50];
    char lname[50];
    struct Dob dob;
    void (*age)(int);
    void (*toString)();
} Person;

void age(int birthYear) {
    int currentYear = 2023;
    int age = currentYear - birthYear;
    printf("Age: %d\n", age);
}

void toString(Person person) {
    printf("First Name: %s\n", person.fname);
    printf("Last Name: %s\n", person.lname);
    printf("Date of Birth: %02d/%02d/%04d\n", person.dob.day, person.dob.month, person.dob.year);
}

int main() {
    Person emp[3];
    emp[0] = (Person){"ACDC", "Thunderstruck", {14, 3, 2021}, age, toString};
    emp[0].age(emp[0].dob.year);
    emp[0].toString(emp[0]);
    return 0;
}


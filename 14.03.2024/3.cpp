#include <iostream>

struct Employee {
    char name[50];
    char surname[50];
    char gender;
};

int main() {
    Employee emp;
    printf("Podaj imię pracownika: ");
    scanf("%s", emp.name);
    printf("Podaj nazwisko pracownika: ");
    scanf("%s", emp.surname);
    printf("Podaj płeć pracownika (k - kobieta, m - mężczyzna): ");
    scanf(" %c", &emp.gender);

    printf("Imię: %s\n", emp.name);
    printf("Nazwisko: %s\n", emp.surname);
    printf("Płeć: %c\n", emp.gender);

    return 0;
}


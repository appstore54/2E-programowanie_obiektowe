#include <iostream>
#include <cmath>

int main() {
    int base, exponent;
    printf("Podaj podstawę: ");
    scanf("%d", &base);
    printf("Podaj wykładnik: ");
    scanf("%d", &exponent);

    int result = pow(base, exponent);
    printf("Wynik: %d\n", result);

    return 0;
}


#include <iostream>

// Deklaracja funkcji obliczającej największy wspólny dzielnik rekurencyjnie
int NWD(int a, int b);

int main() {
    int liczba1, liczba2;

    // Wprowadzanie dwóch liczb naturalnych
    std::cout << "Podaj pierwszą liczbę naturalną: ";
    std::cin >> liczba1;

    std::cout << "Podaj drugą liczbę naturalną: ";
    std::cin >> liczba2;

    // Wyznaczanie i wyświetlanie największego wspólnego dzielnika
    int nwd = NWD(liczba1, liczba2);
    std::cout << "Największy wspólny dzielnik: " << nwd << std::endl;

    return 0;
}

// Definicja funkcji obliczającej największy wspólny dzielnik rekurencyjnie
int NWD(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return NWD(b, a % b);
    }
}


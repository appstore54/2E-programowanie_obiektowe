#include <iostream>

// Deklaracja funkcji obliczającej silnię iteracyjnie
unsigned long long int silniaIteracyjnie(int x);

// Deklaracja funkcji obliczającej silnię rekurencyjnie
unsigned long long int silniaRekurencyjnie(int x);

int main() {
    int x;

    // Wprowadzanie liczby naturalnej
    do {
        std::cout << "Podaj liczbę naturalną (max 12): ";
        std::cin >> x;
    } while (x < 0 || x > 12);

    // Obliczanie i wyświetlanie silni
    std::cout << "Silnia (" << x << ") obliczona iteracyjnie: " << silniaIteracyjnie(x) << std::endl;
    std::cout << "Silnia (" << x << ") obliczona rekurencyjnie: " << silniaRekurencyjnie(x) << std::endl;

    return 0;
}

// Definicja funkcji obliczającej silnię iteracyjnie
unsigned long long int silniaIteracyjnie(int x) {
    unsigned long long int wynik = 1;
    for (int i = 1; i <= x; ++i) {
        wynik *= i;
    }
    return wynik;
}

// Definicja funkcji obliczającej silnię rekurencyjnie
unsigned long long int silniaRekurencyjnie(int x) {
    if (x == 0) {
        return 1;
    } else {
        return x * silniaRekurencyjnie(x - 1);
    }
}


#include <iostream>

// Deklaracja funkcji obliczającej największy wspólny dzielnik
int NWD(int a, int b);

// Deklaracja funkcji obliczającej największą wspólną wielokrotność
int NWW(int a, int b);

int main() {
    int liczba1, liczba2;

    // Wprowadzanie dwóch liczb całkowitych
    std::cout << "Podaj pierwszą liczbę całkowitą: ";
    std::cin >> liczba1;

    std::cout << "Podaj drugą liczbę całkowitą: ";
    std::cin >> liczba2;

    // Obliczanie NWD i NWW
    int nwd = NWD(liczba1, liczba2);
    int nww = NWW(liczba1, liczba2);

    // Wyświetlanie wyników
    std::cout << "Największy wspólny dzielnik (NWD): " << nwd << std::endl;
    std::cout << "Największa wspólna wielokrotność (NWW): " << nww << std::endl;

    return 0;
}

// Definicja funkcji obliczającej największy wspólny dzielnik
int NWD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Definicja funkcji obliczającej największą wspólną wielokrotność
int NWW(int a, int b) {
    return (a * b) / NWD(a, b);
}


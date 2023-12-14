#include <iostream>
#include <cmath>

// Deklaracja funkcji przeciążonej obliczającej miarę kąta wewnętrznego wielokąta foremnego
float oblicz(int liczbaBokow);

// Deklaracja funkcji przeciążonej obliczającej pole powierzchni wielokąta foremnego
double oblicz(int liczbaBokow, float dlugoscBoku);

int main() {
    int liczbaBokow;
    float dlugoscBoku;

    // Wprowadzanie liczby boków
    do {
        std::cout << "Podaj liczbę boków wielokąta foremnego (minimum 3): ";
        std::cin >> liczbaBokow;
    } while (liczbaBokow < 3);

    // Wprowadzanie długości boku
    std::cout << "Podaj długość boku wielokąta foremnego: ";
    std::cin >> dlugoscBoku;

    // Obliczenia i wyświetlanie wyników
    std::cout << "Mira kąta wewnętrznego: " << oblicz(liczbaBokow) << " stopni" << std::endl;
    std::cout << "Pole powierzchni: " << oblicz(liczbaBokow, dlugoscBoku) << std::endl;

    return 0;
}

// Definicja funkcji przeciążonej obliczającej miarę kąta wewnętrznego wielokąta foremnego
float oblicz(int liczbaBokow) {
    return static_cast<float>((liczbaBokow - 2) * 180) / liczbaBokow;
}

// Definicja funkcji przeciążonej obliczającej pole powierzchni wielokąta foremnego
double oblicz(int liczbaBokow, float dlugoscBoku) {
    return 0.25 * liczbaBokow * dlugoscBoku * dlugoscBoku / tan(M_PI / liczbaBokow);
}


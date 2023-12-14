#include <iostream>

// Deklaracja funkcji przeciążającej obliczanie pola kwadratu
float obliczPole(float bok);

// Deklaracja funkcji przeciążającej obliczanie pola prostokąta
float obliczPole(float bokA, float bokB);

// Deklaracja funkcji przeciążającej obliczanie pola koła
double obliczPole(double promien);

int main() {
    float bokKwadratu, bokAProstokata, bokBProstokata;
    double promienKola;

    // Wprowadzanie boków i promienia
    std::cout << "Podaj bok kwadratu: ";
    std::cin >> bokKwadratu;
    std::cout << "Pole kwadratu: " << obliczPole(bokKwadratu) << std::endl;

    std::cout << "Podaj boki prostokąta (oddzielone spacją): ";
    std::cin >> bokAProstokata >> bokBProstokata;
    std::cout << "Pole prostokąta: " << obliczPole(bokAProstokata, bokBProstokata) << std::endl;

    std::cout << "Podaj promień koła: ";
    std::cin >> promienKola;
    std::cout << "Pole koła: " << obliczPole(promienKola) << std::endl;

    return 0;
}

// Definicja funkcji przeciążającej obliczanie pola kwadratu
float obliczPole(float bok) {
    return bok * bok;
}

// Definicja funkcji przeciążającej obliczanie pola prostokąta
float obliczPole(float bokA, float bokB) {
    return bokA * bokB;
}

// Definicja funkcji przeciążającej obliczanie pola koła
double obliczPole(double promien) {
    return 3.14159265359 * promien * promien;
}


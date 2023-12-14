#include <iostream>
#include <cmath>

// Funkcja sprawdzająca, czy liczba jest pierwsza
bool czyPierwsza(int liczba);

int main() {
    int gorneOgraniczenie = 9000;
    int liczbaLiczbPierwszych = 0;

    std::cout << "Liczby pierwsze w przedziale do " << gorneOgraniczenie << ":\n";

    for (int i = 2; i <= gorneOgraniczenie; ++i) {
        if (czyPierwsza(i)) {
            std::cout << i << " ";
            ++liczbaLiczbPierwszych;
        }
    }

    std::cout << "\nLiczba liczb pierwszych w przedziale: " << liczbaLiczbPierwszych << std::endl;

    return 0;
}

// Funkcja sprawdzająca, czy liczba jest pierwsza
bool czyPierwsza(int liczba) {
    if (liczba < 2) {
        return false;
    }

    for (int i = 2; i <= sqrt(liczba); ++i) {
        if (liczba % i == 0) {
            return false;
        }
    }

    return true;
}


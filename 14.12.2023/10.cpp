#include <iostream>
#include <cmath>

// Funkcja sprawdzająca, czy liczba jest pierwsza
bool czyPierwsza(int liczba);

// Funkcja wypisująca liczby półpierwsze w danym przedziale
void wypiszPolpierwsze(int gorneOgraniczenie);

int main() {
    int gorneOgraniczenie = 9000;

    std::cout << "Liczby polpierwsze w przedziale do " << gorneOgraniczenie << ":\n";
    wypiszPolpierwsze(gorneOgraniczenie);

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

// Funkcja wypisująca liczby półpierwsze w danym przedziale
void wypiszPolpierwsze(int gorneOgraniczenie) {
    int liczbaPolpierwsza = 0;

    for (int i = 4; i <= gorneOgraniczenie; ++i) {
        for (int j = 2; j <= i / 2; ++j) {
            if (i % j == 0 && czyPierwsza(j) && czyPierwsza(i / j)) {
                std::cout << "Liczba polpierwsza: " << i << ", Iloczyn dwóch liczb pierwszych: " << j << " * " << i / j << std::endl;
                ++liczbaPolpierwsza;
                break; // Przeskocz do kolejnej liczby
            }
        }
    }

    std::cout << "\nLiczba liczb polpierwszych w przedziale: " << liczbaPolpierwsza << std::endl;
}


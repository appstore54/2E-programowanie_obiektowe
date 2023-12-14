#include <iostream>

// Funkcja obliczająca największy wspólny dzielnik
int najwiekszyWspolnyDzielnik(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Funkcja skracająca ułamek
void skrocUlamek(int &licznik, int &mianownik) {
    int nwd = najwiekszyWspolnyDzielnik(licznik, mianownik);

    if (nwd != 0) {
        licznik /= nwd;
        mianownik /= nwd;
    }
}

int main() {
    int licznik, mianownik;

    // Wprowadzanie licznika i mianownika
    std::cout << "Podaj licznik: ";
    std::cin >> licznik;

    do {
        std::cout << "Podaj mianownik (nie może być zerowy): ";
        std::cin >> mianownik;
    } while (mianownik == 0);

    // Skracanie ułamka
    skrocUlamek(licznik, mianownik);

    // Wyświetlanie wyniku
    std::cout << "Skrócony ułamek: " << licznik << "/" << mianownik << std::endl;

    return 0;
}


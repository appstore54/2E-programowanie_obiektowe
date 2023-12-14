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
    std::cout << "Program do skracania ułamka zwykłego." << std::endl;

    int licznik, mianownik;

    // Wprowadzanie licznika
    std::cout << "Podaj licznik: ";
    std::cin >> licznik;

    // Wprowadzanie mianownika z unikaniem zera
    do {
        std::cout << "Podaj mianownik (nie może być zerowy): ";
        std::cin >> mianownik;
    } while (mianownik == 0);

    // Wyświetlanie ułamka przed skróceniem
    std::cout << "Ułamek przed skróceniem: " << licznik << "/" << mianownik << std::endl;

    // Skracanie ułamka
    skrocUlamek(licznik, mianownik);

    // Wyświetlanie ułamka po skróceniu
    std::cout << "Ułamek po skróceniu: " << licznik << "/" << mianownik << std::endl;

    return 0;
}


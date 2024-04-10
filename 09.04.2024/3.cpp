#include <iostream>
#include <cstring>

using namespace std;

struct Pracownik {
    char imie[50];
    char nazwisko[50];
    char plec;
};

int main() {
    Pracownik pracownik;
    cout << "Podaj imię: ";
    cin >> pracownik.imie;
    cout << "Podaj nazwisko: ";
    cin >> pracownik.nazwisko;
    cout << "Podaj płeć (k/m): ";
    cin >> pracownik.plec;

    printf("Imię: %s\n", pracownik.imie);
    printf("Nazwisko: %s\n", pracownik.nazwisko);
    printf("Płeć: %c\n", pracownik.plec);

    return 0;
}

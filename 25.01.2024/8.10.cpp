#include <iostream>
#include <string>

using namespace std;

// Struktura reprezentująca pracownika
struct Pracownik {
    int numerIdentyfikacyjny;
    string imie;
    string nazwisko;
};

int main() {
    // Inicjalizacja obiektu pracownika
    Pracownik pracownik;

    // Pobieranie danych od użytkownika
    cout << "Podaj numer identyfikacyjny pracownika: ";
    cin >> pracownik.numerIdentyfikacyjny;

    cout << "Podaj imię pracownika: ";
    cin.ignore(); // Ignorowanie ewentualnych znaków nowej linii w buforze
    getline(cin, pracownik.imie);

    cout << "Podaj nazwisko pracownika: ";
    getline(cin, pracownik.nazwisko);

    // Wyświetlanie danych pracownika
    cout << "\nDane pracownika:\n";
    cout << "Numer identyfikacyjny: " << pracownik.numerIdentyfikacyjny << endl;
    cout << "Imię: " << pracownik.imie << endl;
    cout << "Nazwisko: " << pracownik.nazwisko << endl;

    return 0;
}

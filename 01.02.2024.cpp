#include <iostream>
using namespace std;

double dodawanie(double a, double b) {
    return a + b;
}


double odejmowanie(double a, double b) {
    return a - b;
}


double mnozenie(double a, double b) {
    return a * b;
}


double dzielenie(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        cout << "Błąd: Nie można dzielić przez zero." <<endl;
        return 0;
    }
}

int main() {
    double liczba1, liczba2;
    char operacja;

     cout << "Podaj pierwszą liczbę: ";
   cin >> liczba1;

    cout << "Podaj operator (1-+,2--,3-*,4-/): ";
    cin >> operacja;

    cout << "Podaj drugą liczbę: ";
    cin >> liczba2;

    double wynik;

    
    switch (operacja) {
        case '1':
            wynik = dodawanie(liczba1, liczba2);
            break;
        case '2':
            wynik = odejmowanie(liczba1, liczba2);
            break;
        case '3':
            wynik = mnozenie(liczba1, liczba2);
            break;
        case '4':
            wynik = dzielenie(liczba1, liczba2);
            break;
        default:
            std::cout << "Błąd: Nieznany operator." << endl;
            return 1;
    }

    cout << "Wynik: " << wynik << endl;

    return 0;
}


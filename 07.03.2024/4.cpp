#include <iostream>

using namespace std;

double obliczIloraz(double liczba1, double liczba2) {
    if (liczba2 != 0) {
        return liczba1 / liczba2;
    } else {
        cout << "Dzielenie przez zero jest niemożliwe." << endl;
        return 0;
    }
}

int main() {
    double liczba1, liczba2;

    cout << "Podaj pierwszą liczbę: ";
    cin >> liczba1;

    cout << "Podaj drugą liczbę: ";
    cin >> liczba2;

    double iloraz = obliczIloraz(liczba1, liczba2);

    cout << "Wynik dzielenia: " << iloraz << endl;

    return 0;
}


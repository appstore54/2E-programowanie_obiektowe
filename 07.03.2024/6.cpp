#include <iostream>

using namespace std;

int main() {
    int liczba1, liczba2;

    cout << "Podaj pierwszą liczbę: ";
    cin >> liczba1;

    cout << "Podaj drugą liczbę: ";
    cin >> liczba2;

    int wynik = (liczba2 == liczba1 * liczba1) ? 1 : 0;

    cout << "Wynik sprawdzenia: " << wynik << endl;

    return 0;
}


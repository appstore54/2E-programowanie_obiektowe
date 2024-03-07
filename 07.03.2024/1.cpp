#include <iostream>

using namespace std;

int suma(int a, int b);

int main() {
    cout << "Podaj pierwsza liczbe: ";
    int liczba1;
    cin >> liczba1;

    cout << "Podaj druga liczbe: ";
    int liczba2;
    cin >> liczba2;

    int wynik = suma(liczba1, liczba2);
    cout << "Suma: " << wynik << endl;

    return 0;
}

int suma(int a, int b) {
    return a + b;
}


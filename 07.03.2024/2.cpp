#include <iostream>

using namespace std;

int odejmowanie(int a, int b);

int main() {
    int liczba1, liczba2;
    cout << "Podaj pierwsza liczbe: ";
    cin >> liczba1;
    
    cout << "Podaj druga liczbe: ";
    cin >> liczba2;

    int wynik = odejmowanie(liczba1, liczba2);
    cout << "Wynik odejmowania: " << wynik << endl;

    return 0;
}

int odejmowanie(int a, int b) {
    return a - b;
}


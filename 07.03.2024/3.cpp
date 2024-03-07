#include <iostream>

using namespace std;

double obliczIloczyn(double liczba1, double liczba2);

int main() {
    cout << "Podaj pierwsza liczbe: ";
    double liczba1;
    cin >> liczba1;

    cout << "Podaj druga liczbe: ";
    double liczba2;
    cin >> liczba2;

    double wynik = obliczIloczyn(liczba1, liczba2);
    cout << "Iloczyn wynosi: " << wynik << endl;

    return 0;
}

double obliczIloczyn(double liczba1, double liczba2) {
    return liczba1 * liczba2;
}


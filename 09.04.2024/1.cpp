#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>

using namespace std;


int potega(int podstawa, int wykladnik) {
    int wynik = 1;
    for (int i = 0; i < wykladnik; ++i) {
        wynik *= podstawa;
    }
    return wynik;
}

int main() {
    int podstawa, wykladnik;
    cout << "Podaj podstawę: ";
    cin >> podstawa;
    cout << "Podaj wykładnik: ";
    cin >> wykladnik;
    cout << "Wynik: " << potega(podstawa, wykladnik) << endl;

    return 0;
}

#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int main() {
    int liczbaElementow;
    cout << "Podaj liczbę elementów: ";
    cin >> liczbaElementow;

    // Sprawdzanie, czy liczba elementów jest dodatnia
    if (liczbaElementow <= 0) {
        cout << "Liczba elementów musi być większa od 0." << endl;
        return 1;
    }

    vector<int> tablica(liczbaElementow);
    cout << "Podaj " << liczbaElementow << " wartości:" << endl;

    // Wczytywanie wartości do tablicy
    for (int i = 0; i < liczbaElementow; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> tablica[i];
    }

    // Inicjalizacja wartości minimalnej i maksymalnej
    int minWartosc = numeric_limits<int>::max();
    int maxWartosc = numeric_limits<int>::min();

    // Znajdowanie wartości minimalnej i maksymalnej
    for (int i = 0; i < liczbaElementow; i++) {
        if (tablica[i] < minWartosc) {
            minWartosc = tablica[i];
        }
        if (tablica[i] > maxWartosc) {
            maxWartosc = tablica[i];
        }
    }

    // Wyświetlanie wyników
    cout << "Najmniejsza wartość: " << minWartosc << endl;
    cout << "Największa wartość: " << maxWartosc << endl;

    return 0;
}

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Wprowadź promień koła
    double promien;
    cout << "Podaj promień koła: ";
    cin >> promien;

    // Oblicz obwód i pole koła
    double obwod = 2 * M_PI * promien;
    double pole = M_PI * pow(promien, 2);

    // Wyświetl wyniki
    cout << "Obwód koła: " << obwod << endl;
    cout << "Pole koła: " << pole << endl;

    return 0;
}


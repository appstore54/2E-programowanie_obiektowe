#include <iostream>
#include <map>
#include <string>

using namespace std;


double przelicz(double kwota, double kurs) {
    return kwota * kurs;
}

int main() {
    
    map<string, double> kursy {
        {"dolar", 3.96},        
        {"euro", 4.29},         
        {"funt", 5.01},
        {"jen", 0.026},
        {"zloty", 1.00}
    };

    
    string waluta_poczatkowa, waluta_docelowa;
    double kwota;

    cout << "Podaj walutę początkową (dolar, euro, funt, jen, zloty): ";
    cin >> waluta_poczatkowa;

    if (kursy.find(waluta_poczatkowa) == kursy.end()) {
        cout << "Nieznana waluta!" << endl;
        return 1;
    }

    cout << "Podaj walutę docelową (dolar, euro, funt, jen, zloty): ";
    cin >> waluta_docelowa;

    if (kursy.find(waluta_docelowa) == kursy.end()) {
        cout << "Nieznana waluta!" << endl;
        return 1;
    }

    cout << "Podaj kwotę w " << waluta_poczatkowa << ": ";
    cin >> kwota;

        double przeliczona_kwota = przelicz(kwota, kursy[waluta_poczatkowa] / kursy[waluta_docelowa]);

        cout << "Kwota po przeliczeniu na " << waluta_docelowa << ": " << przeliczona_kwota << endl;

    return 0;
}


#include <iostream>
#include <string>
using namespace std;

void pobierzLancuch(string& lancuch) {
    cin >> lancuch;
}

void sumaLancuchow(const string& lancuch1, const string& lancuch2, string& lancuch3) {
    lancuch3 = lancuch1 + " " + lancuch2;
}

void wyswietlLancuch(const string& lancuch) {
    cout << lancuch << endl;
}

int main() {
    string czlon1 = "", czlon2 = "", czlon3 = "";
    string srodowisko = "";


    cout << "Podaj pierwszy czlon nazwy srodowiska programistycznego: ";
    pobierzLancuch(czlon1);

    cout << "Podaj drugi czlon: ";
    pobierzLancuch(czlon2);

    cout << "Podaj trzeci czlon: ";
    pobierzLancuch(czlon3);

   
    sumaLancuchow(czlon1, czlon2, srodowisko);
    sumaLancuchow(srodowisko, czlon3, srodowisko);

    cout << "Środowisko programistyczne: ";
    wyswietlLancuch(srodowisko);

    return 0;
}


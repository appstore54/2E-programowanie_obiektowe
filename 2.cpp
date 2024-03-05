#include <iostream>
#include <cstring>
using namespace std;

// Definicje funkcji:
void pobierzNapis(char napis[]) {
    cin >> napis;
}

void wyswietlNapis(const char napis[]) {
    cout << napis << std::endl;
}

void sumaNapisow(const char napis1[], const char napis2[], char napis3[]) {
    char temp[16] = "";
    strcat(temp, napis1);
    strcat(temp, " ");
    strcat(temp, napis2);
    strcat(napis3, temp);
}

int main() {
    char nazwaJezyka[10] = "", wersjaJezyka[10] = "";
    char jezyk[18] = "";

    
    cout << "Podaj nazwę języka programowania: ";
    pobierzNapis(nazwaJezyka);

    cout << "Podaj wersję: ";
    pobierzNapis(wersjaJezyka);

    
    sumaNapisow(nazwaJezyka, wersjaJezyka, jezyk);

    
    cout << "Język programowania: ";
    wyswietlNapis(jezyk);

    return 0;
}


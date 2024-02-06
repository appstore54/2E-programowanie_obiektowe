#include <iostream>

using namespace std;

float zamianaJednostek(float wartosc, string jednostkaPoczatkowa, string jednostkaKoncowa) {
  float wynik = wartosc;

  
  if (jednostkaPoczatkowa == "bajt") {
    wynik *= 8;
  } else if (jednostkaPoczatkowa == "kb") {
    wynik *= 1024 * 8;
  } else if (jednostkaPoczatkowa == "mb") {
    wynik *= 1024 * 1024 * 8;
  } else if (jednostkaPoczatkowa == "gb") {
    wynik *= 1024 * 1024 * 1024 * 8;
  } else if (jednostkaPoczatkowa == "tb") {
    wynik *= 1024 * 1024 * 1024 * 1024 * 8;
  }

  
  if (jednostkaKoncowa == "bajt") {
    wynik /= 8;
  } else if (jednostkaKoncowa == "kb") {
    wynik /= 1024 * 8;
  } else if (jednostkaKoncowa == "mb") {
    wynik /= 1024 * 1024 * 8;
  } else if (jednostkaKoncowa == "gb") {
    wynik /= 1024 * 1024 * 1024 * 8;
  } else if (jednostkaKoncowa == "tb") {
    wynik /= 1024 * 1024 * 1024 * 1024 * 8;
  }

  return wynik;
}

int main() {
  float wartosc;
  string jednostkaPoczatkowa, jednostkaKoncowa;

  cout << "Podaj wartosc: ";
  cin >> wartosc;
  cout << "Podaj jednostke poczatkowa (bajt, bit, kb, mb, gb, tb): ";
  cin >> jednostkaPoczatkowa;
  cout << "Podaj jednostke końcowa (bajt, bit, kb, mb, gb, tb): ";
  cin >> jednostkaKoncowa;

  cout << wartosc << " " << jednostkaPoczatkowa << " = " << zamianaJednostek(wartosc, jednostkaPoczatkowa, jednostkaKoncowa) << " " << jednostkaKoncowa << endl;

    return 0;
}


#include <iostream>

using namespace std;

float zamiana(float mile) {
  return mile * 1.609;
}

int main() {
  float mile;
  cout << "Podaj odległosc w milach: ";
  cin >> mile;
  cout << "Odległosc w kilometrach wynosi: " << zamiana(mile) << endl;
  return 0;
}


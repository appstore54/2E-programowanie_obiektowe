#include <iostream>
using namespace std;
const float Pi = 3.14;

float pole(float r, const float& pi = Pi) {
    return pi * r * r;
}

float obwod(float r, const float& pi = Pi) {
    return 2 * pi * r;
}

int main() {
    float promien;

    cout << "Podaj promień koła: ";
    cin >> promien;

    cout << "Pole koła: " << pole(promien) << endl;
    cout << "Obwód koła: " << obwod(promien) <<endl;

    return 0;
}


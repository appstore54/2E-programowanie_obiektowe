#include <iostream>
#include <cmath>
using namespace std;

int binaryToDecimal(string binary) {
    int decimal = 0;
    int len = binary.length();

    for (int i = 0; i < len; i++) {
        if (binary[i] == '1') {
            decimal += pow(2, len - 1 - i);
        }
    }

    return decimal;
}

int main() {
    string binary;
    cout << "Podaj liczbę binarną: ";
    cin >> binary;

    int decimal = binaryToDecimal(binary);

    cout << "Wartość dziesiętna: " << decimal << endl;

    return 0;
}

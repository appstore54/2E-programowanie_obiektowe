#include <iostream>
#include <stack>
using namespace std;

string decimalToBinary(int decimal) {
    stack<int> binaryDigits;

    while (decimal > 0) {
        binaryDigits.push(decimal % 2);
        decimal /= 2;
    }

    string binary = "";

    while (!binaryDigits.empty()) {
        binary += to_string(binaryDigits.top());
        binaryDigits.pop();
    }

    return binary;
}

int main() {
    int decimal;
    cout << "Podaj liczbę dziesiętną: ";
    cin >> decimal;

    string binary = decimalToBinary(decimal);

    cout << "Wartość binarna: " << binary << endl;

    return 0;
}

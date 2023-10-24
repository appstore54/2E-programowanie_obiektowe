#include <iostream>
using namespace std;

int main() {
    int numbers[10];

    cout << "Podaj 10 liczb całkowitych:" << endl;

    for (int i = 0; i < 10; i++) {
        cin >> numbers[i];
    }

    cout << "Liczby w odwrotnej kolejności:" << endl;

    for (int i = 9; i >= 0; i--) {
        cout << numbers[i] << " ";
    }

    cout << endl;

    return 0;
}

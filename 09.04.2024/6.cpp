#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char przedmioty[4][50];
    for (int i = 0; i < 4; ++i) {
        cout << "Podaj nazwę przedmiotu " << i + 1 << ": ";
        cin >> przedmioty[i];
    }

    cout << "Zawartość tablicy: " << endl;
    for (int i = 0; i < 4; ++i) {
        cout << przedmioty[i] << endl;
    }

    return 0;
}

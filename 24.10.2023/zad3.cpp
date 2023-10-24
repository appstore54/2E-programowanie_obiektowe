#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int numThrows;
    cout << "Podaj liczbę rzutów kostką: ";
    cin >> numThrows;

    srand(time(0));

    for (int i = 0; i < numThrows; i++) {
        int result = rand() % 6 + 1;
        cout << "Rzut " << (i + 1) << ": " << result << endl;
    }

    return 0;
}

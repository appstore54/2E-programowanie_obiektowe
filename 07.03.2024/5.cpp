#include <iostream>

using namespace std;

bool czyTrojkatPitagorejski(int a, int b, int c) {
    return (a * a + b * b == c * c) || (b * b + c * c == a * a) || (c * c + a * a == b * b);
}

int main() {
    int a, b, c;

    cout << "Podaj długość boku a: ";
    cin >> a;

    cout << "Podaj długość boku b: ";
    cin >> b;

    cout << "Podaj długość boku c: ";
    cin >> c;

    if (czyTrojkatPitagorejski(a, b, c)) {
        cout << "Podane długości boków tworzą trójkąt pitagorejski." << endl;
    } else {
        cout << "Podane długości boków nie tworzą trójkąta pitagorejskiego." << endl;
    }

    return 0;
}


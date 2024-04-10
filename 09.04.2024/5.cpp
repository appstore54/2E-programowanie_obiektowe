#include <iostream>
#include <cmath>

using namespace std;

double poleTrojkata(double a, double b, double c) {
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main() {
    double a, b, c;
    cout << "Podaj długości boków trójkąta: ";
    cin >> a >> b >> c;

    cout << "Pole trójkąta: " << poleTrojkata(a, b, c) << endl;

    return 0;
}

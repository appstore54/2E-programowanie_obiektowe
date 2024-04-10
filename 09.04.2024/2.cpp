#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double kat_stopnie;
    cout << "Podaj kąt w stopniach: ";
    cin >> kat_stopnie;

    double kat_radiany = kat_stopnie * M_PI / 180.0;

    printf("sin(%f) = %f\n", kat_stopnie, sin(kat_radiany));
    printf("cos(%f) = %f\n", kat_stopnie, cos(kat_radiany));
    printf("tan(%f) = %f\n", kat_stopnie, tan(kat_radiany));

    return 0;
}

#include <iostream>
#include <cmath>

double heron_area(double a, double b, double c) {
    double s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main() {
    double side_a, side_b, side_c;
    printf("Podaj długość boku a: ");
    scanf("%lf", &side_a);
    printf("Podaj długość boku b: ");
    scanf("%lf", &side_b);
    printf("Podaj długość boku c: ");
    scanf("%lf", &side_c);

    double area = heron_area(side_a, side_b, side_c);
    printf("Pole trójkąta: %lf\n", area);

    return 0;
}


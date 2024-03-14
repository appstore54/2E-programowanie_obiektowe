#include <iostream>
#include <cmath>

int main() {
    double angle_deg;
    printf("Podaj kąt w stopniach: ");
    scanf("%lf", &angle_deg);

    double angle_rad = angle_deg * M_PI / 180.0;
    double sin_result = sin(angle_rad);
    double cos_result = cos(angle_rad);
    double tan_result = tan(angle_rad);

    printf("Sinus: %lf\n", sin_result);
    printf("Cosinus: %lf\n", cos_result);
    printf("Tangens: %lf\n", tan_result);

    return 0;
}


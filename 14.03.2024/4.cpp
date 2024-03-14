#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(NULL));
    double random_number = (double)rand() / RAND_MAX * 9 + 1;

    printf("Liczba rzeczywista przed zaokrągleniem: %lf\n", random_number);
    int rounded_number = (int)(random_number + 0.5);
    printf("Zaokrąglona liczba całkowita: %d\n", rounded_number);

    return 0;
}


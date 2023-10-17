#include <iostream>

int main() {
    int product = 1;
    while (true) {
        int number;
        std::cout << "Podaj liczbę (0 kończy): ";
        std::cin >> number;
        if (number == 0) {
            break;
        }
        if (number % 2 == 0) {
            product *= number;
        } else {
            std::cout << "Podana liczba nie jest parzysta. Podaj inną liczbę." << std::endl;
        }
    }

    std::cout << "Iloczyn liczb parzystych to: " << product << std::endl;

    return 0;
}

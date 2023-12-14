#include <iostream>
#include <string>

void funkcjaPierwsza() {
    std::cout << "Funkcja pierwsza została wywołana." << std::endl;
}

void funkcjaDruga(std::string argument) {
    std::cout << "Funkcja druga została wywołana z argumentem: " << argument << std::endl;
}

int funkcjaTrzecia(std::string argument) {
    std::cout << "Funkcja trzecia została wywołana z argumentem: " << argument << std::endl;
    return argument.length(); // Przykładowa wartość zwracana
}

int main() {
    int wybor;

    do {
        std::cout << "Wybierz numer funkcji (1, 2, 3) lub 0, aby zakończyć: ";
        std::cin >> wybor;

        switch (wybor) {
            case 1:
                funkcjaPierwsza();
                break;
            case 2: {
                std::string argument;
                std::cout << "Podaj argument dla funkcji drugiej: ";
                std::cin >> argument;
                funkcjaDruga(argument);
                break;
            }
            case 3: {
                std::string argument;
                std::cout << "Podaj argument dla funkcji trzeciej: ";
                std::cin >> argument;
                int wynik = funkcjaTrzecia(argument);
                std::cout << "Funkcja trzecia zwróciła: " << wynik << std::endl;
                break;
            }
            case 0:
                std::cout << "Zakończono program." << std::endl;
                break;
            default:
                std::cout << "Nieprawidłowy numer funkcji. Spróbuj ponownie." << std::endl;
        }

    } while (wybor != 0);

    return 0;
}


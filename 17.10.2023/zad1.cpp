#include <iostream>
#include <string>

int main() {
    std::string login = "admin";
    std::string password = "12345";
    int attempts = 3;

    while (attempts > 0) {
        std::string user_login, user_password;
        std::cout << "Podaj login: ";
        std::cin >> user_login;
        std::cout << "Podaj hasło: ";
        std::cin >> user_password;

        if (user_login == login && user_password == password) {
            std::cout << "Zalogowano pomyślnie!" << std::endl;
            break;
        } else {
            std::cout << "Błędny login lub hasło. Pozostało prób: " << attempts - 1 << std::endl;
            attempts--;
        }
    }

    if (attempts == 0) {
        std::cout << "Zbyt wiele błędnych prób. Konto zablokowane." << std::endl;
    }

    return 0;
}

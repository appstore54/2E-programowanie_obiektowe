#include <iostream>
using namespace std;

char plansza[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
int aktualnyGracz = 1;

void wyswietlPlansze() {
    cout << "Plansza:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << plansza[i][j] << " ";
        }
        cout << endl;
    }
}

bool sprawdzWygrana() {
    // Sprawdzanie wyganej w wierszach, kolumnach i na przekątnych
    for (int i = 0; i < 3; i++) {
        if (plansza[i][0] == plansza[i][1] && plansza[i][1] == plansza[i][2]) return true;  // wiersze
        if (plansza[0][i] == plansza[1][i] && plansza[1][i] == plansza[2][i]) return true;  // kolumny
    }
    if (plansza[0][0] == plansza[1][1] && plansza[1][1] == plansza[2][2]) return true;      // przekątna \
    if (plansza[0][2] == plansza[1][1] && plansza[1][1] == plansza[2][0]) return true;      // przekątna /

    return false;
}

bool sprawdzRemis() {
    // Sprawdzanie remisu
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (plansza[i][j] != 'X' && plansza[i][j] != 'O') {
                return false;  // Jeśli znajdziemy puste pole, gra nie jest w remisie
            }
        }
    }
    return true;  // Jeśli wszystkie pola są zajęte, mamy remis
}

void zmienGracza() {
    aktualnyGracz = (aktualnyGracz == 1) ? 2 : 1;
}

int main() {
    char choice;

    do {
        int wybor;
        bool koniecGry = false;

        do {
            wyswietlPlansze();
            cout << "Gracz " << aktualnyGracz << ", wybierz pole (1-9): ";
            cin >> wybor;

            char znak = (aktualnyGracz == 1) ? 'X' : 'O';

            // Sprawdzenie poprawności wyboru pola
            if (wybor >= 1 && wybor <= 9 && plansza[(wybor - 1) / 3][(wybor - 1) % 3] == '1' + wybor - 1) {
                plansza[(wybor - 1) / 3][(wybor - 1) % 3] = znak;

                if (sprawdzWygrana()) {
                    wyswietlPlansze();
                    cout << "Gracz " << aktualnyGracz << " wygrywa! Gratulacje!\n";
                    koniecGry = true;
                } else if (sprawdzRemis()) {
                    wyswietlPlansze();
                    cout << "Remis! Plansza jest pełna.\n";
                    koniecGry = true;
                } else {
                    zmienGracza();
                }
            } else {
                cout << "Nieprawidłowy ruch. Spróbuj jeszcze raz.\n";
            }

        } while (!koniecGry);

        wyswietlPlansze();
        cout << "Czy chcesz kontynuować grę? (t/n): ";
        cin >> choice;

    } while (choice != 'n');

    cout << "Dziękujemy za grę!\n";

    return 0;
}


#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

const int SIZE = 10;

void initializeBoards(char playerBoard[SIZE][SIZE], char computerBoard[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            playerBoard[i][j] = '-';
            computerBoard[i][j] = '-';
        }
    }
}

void displayPlayerBoard(const char playerBoard[SIZE][SIZE]) {
    cout << "  ";
    for (int i = 0; i < SIZE; ++i) {
        cout << i << " ";
    }
    cout << endl;

    for (int i = 0; i < SIZE; ++i) {
        cout << i << " ";
        for (int j = 0; j < SIZE; ++j) {
            cout << playerBoard[i][j] << " ";
        }
        cout << endl;
    }
}

void placeComputerShip(char computerBoard[SIZE][SIZE]) {
    srand(static_cast<unsigned>(time(0)));

    
    int shipRow = rand() % SIZE;
    int shipCol = rand() % SIZE;
    computerBoard[shipRow][shipCol] = 'S';
}

bool isHit(char board[SIZE][SIZE], int guessRow, int guessCol) {
    return board[guessRow][guessCol] == 'S';
}

int main() {
    char playerBoard[SIZE][SIZE];
    char computerBoard[SIZE][SIZE];
    initializeBoards(playerBoard, computerBoard);
    placeComputerShip(computerBoard);

    int attempts = 0;

    cout << "Witaj w grze w statki!\n";

    do {
        displayPlayerBoard(playerBoard);

        int guessRow, guessCol;
        cout << "Podaj wiersz: ";
        cin >> guessRow;
        cout << "Podaj kolumnę: ";
        cin >> guessCol;

        if (guessRow < 0 || guessRow >= SIZE || guessCol < 0 || guessCol >= SIZE) {
            cout << "Błędne współrzędne. Spróbuj ponownie.\n";
            continue;
        }

        if (isHit(computerBoard, guessRow, guessCol)) {
            cout << "Trafiony!\n";
            break;
        } else {
            cout << "Pudło!\n";
        }

        attempts++;

    } while (attempts < 10);

    cout << "Koniec gry!\n";

    return 0;
}


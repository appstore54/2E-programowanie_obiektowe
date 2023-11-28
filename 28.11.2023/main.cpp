#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

const int rows = 5;
const int cols = 5;
const int mines = 5;

vector<vector<char>> board(rows, vector<char>(cols, '*'));
vector<vector<bool>> revealed(rows, vector<bool>(cols, false));

void printBoard() {
    cout << "  ";
    for (int i = 0; i < cols; ++i) {
        cout << i << " ";
    }
    cout << endl;

    for (int i = 0; i < rows; ++i) {
        cout << i << " ";
        for (int j = 0; j < cols; ++j) {
            if (revealed[i][j]) {
                cout << board[i][j] << " ";
            } else {
                cout << "* ";
            }
        }
        cout << endl;
    }
}

void placeMines() {
    srand(time(0));
    int minesToPlace = mines;

    while (minesToPlace > 0) {
        int row = rand() % rows;
        int col = rand() % cols;

        if (board[row][col] != 'X') {
            board[row][col] = 'X';
            minesToPlace--;
        }
    }
}

int countAdjacentMines(int row, int col) {
    int count = 0;

    for (int i = -1; i <= 1; ++i) {
        for (int j = -1; j <= 1; ++j) {
            int newRow = row + i;
            int newCol = col + j;

            if (newRow >= 0 && newRow < rows && newCol >= 0 && newCol < cols) {
                if (board[newRow][newCol] == 'X') {
                    count++;
                }
            }
        }
    }

    return count;
}

void reveal(int row, int col) {
    if (revealed[row][col]) {
        return;
    }

    revealed[row][col] = true;

    if (board[row][col] == 'X') {
        cout << "Przegrales! Gra skonczona." << endl;
        exit(0);
    } else {
        int mines = countAdjacentMines(row, col);
        if (mines > 0) {
            board[row][col] = mines + '0';
        } else {
            for (int i = -1; i <= 1; ++i) {
                for (int j = -1; j <= 1; ++j) {
                    int newRow = row + i;
                    int newCol = col + j;

                    if (newRow >= 0 && newRow < rows && newCol >= 0 && newCol < cols) {
                        reveal(newRow, newCol);
                    }
                }
            }
        }
    }
}

bool checkWin() {
    int unrevealedCount = 0;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (!revealed[i][j]) {
                unrevealedCount++;
            }
        }
    }

    return unrevealedCount == mines;
}

int main() {
    placeMines();

    while (true) {
        printBoard();

        int row, col;
        cout << "Podaj wiersz i kolumne (oddzielone spacja): ";
        cin >> row >> col;

        if (row < 0 || row >= rows || col < 0 || col >= cols) {
            cout << "Nieprawidlowe wspolrzedne. Sprobuj ponownie." << endl;
            continue;
        }

        reveal(row, col);

        if (checkWin()) {
            cout << "Gratulacje! Wygrałes!" << endl;
            break;
        }
    }

    return 0;
}


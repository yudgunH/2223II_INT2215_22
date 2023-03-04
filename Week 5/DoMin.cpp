#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int ROWS = 10;
const int COLS = 10;

int board[ROWS][COLS];
bool opened[ROWS][COLS];

void initBoard() {
    srand(time(NULL));
    int mines = 0;
    cout << "Enter number of mines: ";
    cin >> mines;
    while (mines < 1 || mines > ROWS * COLS) {
        cout << "Invalid number of mines. Please enter again: ";
        cin >> mines;
    }

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            board[i][j] = 0;
            opened[i][j] = false;
        }
    }

    int count = 0;
    while (count < mines) {
        int row = rand() % ROWS;
        int col = rand() % COLS;
        if (board[row][col] != 9) {
            board[row][col] = 9;
            count++;
        }
    }
}

void printBoard() {
    cout << "  ";
    for (int j = 0; j < COLS; j++) {
        cout << j << " ";
    }
    cout << endl;

    for (int i = 0; i < ROWS; i++) {
        cout << i << " ";
        for (int j = 0; j < COLS; j++) {
            if (opened[i][j]) {
                cout << board[i][j] << " ";
            } else {
                cout << "- ";
            }
        }
        cout << endl;
    }
}

int countMinesAround(int row, int col) {
    int count = 0;
    for (int i = row - 1; i <= row + 1; i++) {
        for (int j = col - 1; j <= col + 1; j++) {
            if (i >= 0 && i < ROWS && j >= 0 && j < COLS && board[i][j] == 9) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    initBoard();

    bool gameover = false;
    bool win = false;
    while (!gameover) {
        cout << endl << "Current board:" << endl;
        printBoard();

        int row, col;
        cout << endl << "Enter row and column to open: ";
        cin >> row >> col;

        if (board[row][col] == 9) {
            cout << endl << "YOU'RE DEAD!" << endl;
            gameover = true;
        for (int i = 0; i < ROWS; i++) {
            for (int j = 0; j < COLS; j++) {
                opened[i][j] = true;
            }
        }
        printBoard();
    } else {
        opened[row][col] = true;

        bool allOpened = true;
        for (int i = 0; i < ROWS; i++) {
            for (int j = 0; j < COLS; j++) {
                if (!opened[i][j] && board[i][j] != 9) {
                    allOpened = false;
                }
            }
        }
        if (allOpened) {
            win = true;
            break;
        }

        for (int i = 0; i < ROWS; i++) {
            for (int j = 0; j < COLS; j++) {
                if (opened[i][j] && board[i][j] != 9) {
                    int count = countMinesAround(i, j);
                    board[i][j] = count;
                }
            }
        }
    }
}

if (win) {
    cout << endl << "CONGRATULATIONS! YOU WIN!" << endl;
}

return 0;
}
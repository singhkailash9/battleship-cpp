#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int SIZE = 4;

void initializeShips(bool ships[SIZE][SIZE]) {
    srand(time(0));
    int count = 0;
    while (count < 4) {
        int row = rand() % SIZE;
        int col = rand() % SIZE;
        if (!ships[row][col]) {
            ships[row][col] = true;
            count++;
        }
    }
}

void printShips(bool ships[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << ships[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    char again;
    do {
        bool ships[SIZE][SIZE] = {false};
        initializeShips(ships);

        int hits = 0;
        int numberOfTurns = 0;

        // Debugging
        // printShips(ships);
        // cout << endl;

        while (hits < 4) {
            int row, column;

            cout << "Selecting coordinates\n";
            cout << "Choose a row number between 1 and 4: ";
            cin >> row;
            row--;

            cout << "Choose a column number between 1 and 4: ";
            cin >> column;
            column--;

            if (row >= 0 && row < SIZE && column >= 0 && column < SIZE) {
                if (ships[row][column]) {
                    ships[row][column] = false;
                    hits++;
                    cout << "Hit! " << (4 - hits) << " left.\n\n";
                } else {
                    cout << "Miss\n\n";
                }
            } else {
                cout << "Invalid coordinates. Please try again.\n\n";
            }

            numberOfTurns++;
        }

        cout << "Victory!\n";
        cout << "You won in " << numberOfTurns << " turns\n";

        cout << "Would you like to play again? (y/n): ";
        cin >> again;

    } while (again == 'y');

    return 0;
}

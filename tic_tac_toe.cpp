// simple tic-tac-toe game.
#include <iostream>
#include <ctime>
using namespace std;

void drawBoard(char *board);
void playerMove(char *board, char player);
void computerMove(char *board, char computer);
bool checkWinner(char *board, char player, char computer);

int main() {

    char board[] = {' ', ' ', ' ',
                    ' ', ' ', ' ',
                    ' ', ' ', ' '};
    char player = 'X';
    char computer = 'O';

    do {

        // Game's main loop.
        drawBoard(board);
        playerMove(board, player);
        if (checkWinner(board, player, computer)) {
            drawBoard(board);
            break;
        }
        computerMove(board, computer);
        if (checkWinner(board, player, computer)) {
            drawBoard(board);
            break;
        }

    } while (true);

    return 0;
}

void drawBoard(char *board) {
    // Draws the game board.
    cout << "\n";
    cout << board[0] << "|" << board[1] << "|" << board[2] << "\n";
    cout << "-----\n";
    cout << board[3] << "|" << board[4] << "|" << board[5] << "\n";
    cout << "-----\n";
    cout << board[6] << "|" << board[7] << "|" << board[8] << "\n";
    cout << "\n";
}

void playerMove(char *board, char player) {
    // Receives a movement from the player.
    int position;

    do {
        cout << "Make your move (1-9): ";
        cin >> position;
        if (position > 0 && position < 10) {
            if (board[position-1] == ' ') {
                break;
            } else {
                cout << "Invalid play!\n";
            }
        } else {
            cout << "Invalid position!\n";
        }
    } while (true);

    board[position-1] = player;
}

void computerMove(char *board, char computer) {
    // Makes a random movement for the computer.
    srand(time(NULL));
    int randPosition;

    do {
        randPosition = rand() % 9;
    } while (board[randPosition] != ' ');

    board[randPosition] = computer;
}

bool checkWinner(char *board, char player, char computer) {
    // Check all winning combinations.
    for (int i = 0; i < 3; i++) {
        // Check rows.
        if (board[3*i] == player && board[3*i+1] == player && board[3*i+2] == player) {
            cout << "You won!\n";
            return true;
        }
        if (board[3*i] == computer && board[3*i+1] == computer && board[3*i+2] == computer) {
            cout << "The computer won!\n";
            return true;
        }

        // Check columns.
        if (board[i] == player && board[i+3] == player && board[i+6] == player) {
            cout << "You won!\n";
            return true;
        }
        if (board[i] == computer && board[i+3] == computer && board[i+6] == computer) {
            cout << "The computer won!\n";
            return true;
        }
    }

    // Check diagonals.
    if (board[0] == player && board[4] == player && board[8] == player) {
        cout << "You won!\n";
        return true;
    }
    if (board[2] == player && board[4] == player && board[6] == player) {
        cout << "You won!\n";
        return true;
    }

    if (board[0] == computer && board[4] == computer && board[8] == computer) {
        cout << "The computer won!\n";
        return true;
    }
    if (board[2] == computer && board[4] == computer && board[6] == computer) {
        cout << "The computer won!\n";
        return true;
    }

    // Check for a tie.
    bool tie = true;
    for (int i = 0; i < 9; i++) {
        if (board[i] == ' ') {
            tie = false;
        }
    }

    if (tie) {
        cout << "It's a tie!\n";
        return true;
    }

    // No winner or tie.
    return false;
}
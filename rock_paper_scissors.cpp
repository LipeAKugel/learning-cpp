// simple rock, paper, scissors game.
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

char getPlayerChoice();
char getComputerChoice();
void showChoices(char player, char computer); 
void showWinner(char player, char computer);

int main() {

    char player, computer;

    do {
        system("clear");
        player = getPlayerChoice();
        computer = getComputerChoice();

        showChoices(player, computer);
        showWinner(player, computer);

        cout << "Continue? [y/n] ";
        cin.ignore();

        if (getchar() == 'y') {
            cin.ignore();
        } else {
            break;
        }
        
    } while (true);

    return 0;
}

char getPlayerChoice() {

    char choice;

    while (true) {
        cout << "ROCK -- PAPERS -- SCISSORS\n";
        cout << "r - rock  p - paper  s - scissors\n";
        cout << "Your choice: ";
        choice = getchar();

        if (choice == 'r' || choice == 'p' || choice == 's') {
            return choice;
        } else {
            system("clear");
            cout << "Invalid choice!\n";
        }
    }
}

char getComputerChoice() {

    srand(time(NULL));
    char choice;
    int option_num = (rand() % 3) + 1;

    switch (option_num) {
    case 1:
        choice = 'r';
        break;
    case 2:
        choice = 'p';
        break;
    case 3:
        choice = 's';
        break;
    }

    return choice;
}

void showChoices(char player, char computer) {
    switch (player) {
        case 'r':
            cout << "You choose rock!\n";
            break;
        case 'p':
            cout << "You choose paper!\n";
            break;
        case 's':
            cout << "You choose scissors!\n";
            break;
        default:
            cout << "You choose a invalid option!\n";
    }

    switch (computer) {
        case 'r':
            cout << "Computer choose rock!\n";
            break;
        case 'p':
            cout << "Computer choose paper!\n";
            break;
        case 's':
            cout << "Computer choose scissors!\n";
            break;
        default:
            cout << "Computer choose a invalid option!\n";
    }
}

void showWinner(char player, char computer) {
    if (player == computer) {
        cout << "Draw!" << endl;
    } else if (player == 'r' && computer == 'p') {
        cout << "You lost!" << endl;
    } else if (player == 'r' && computer == 's') {
        cout << "You win!" << endl;
    } else if (player == 'p' && computer == 'r') {
        cout << "You win!" << endl;
    } else if (player == 'p' && computer == 's') {
        cout << "You lost!" << endl;
    } else if (player == 's' && computer == 'r') {
        cout << "You lost!" << endl;
    } else if (player == 's' && computer == 'p') {
        cout << "You win!" << endl;
    }
}
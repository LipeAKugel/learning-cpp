#include <iostream>
using namespace std;

enum Menu {new_game = 1, load_game = 2, options = 3, leave = 4};

int main() {

    int option;

    cout << "--- MENU ---\n";
    cout << "1 - NEW GAME\n";
    cout << "2 - LOAD GAME\n";
    cout << "3 - OPTIONS\n";
    cout << "4 - EXIT\n";

    cout << "option: ";
    cin >> option;

    switch (option) {
        case new_game:
            cout << "\nWIP\n";
            break;
        case load_game:
            cout << "\nWIP\n";
            break;
        case options:
            cout << "\nWIP\n";
            break;
        case leave:
            cout << "\nexiting...\n";
            break;
        default:
            cout << "\nINVALID\n";
            break;
    }

    return 0;
}
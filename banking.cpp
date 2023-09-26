// simple banking program.
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

void showBalance(double balance);
double deposit(double balance);
double withdraw(double balance);

int main() {

    double balance = 0;
    int option = 0;

    do {
        cout << "Select a option:\n";
        cout << "1 - Show balance  2-Make deposit  3-Make widthdraw  4-Exit\n";
        cin >> option;

        cin.clear();
        cin.ignore();
        fflush(stdin);

        switch (option) {
        case 1:
            showBalance(balance);
            break;
        case 2:
            balance = deposit(balance);
            break;
        case 3:
            balance = withdraw(balance);
            break;
        case 4:
            cout << "Exiting...\n";
            break;
        default:
            system("clear");
            cout << "Invalid option!\n";
            break;
        }
    } while (option != 4);

    return 0;
}

void showBalance(double balance) {
    // Shows the current balance.
    system("clear");
    cout << "Your balance is: $" << setprecision(2) << fixed << balance << endl;
}

double deposit(double balance) {
    // Makes a deposit.
    system("clear");
    double value;

    cout << "Value to deposit: $";
    cin >> value;

    if (value > 0) {
        return balance + value;
    } else {
        cout << "Not a valid amount!" << endl;
        return balance;
    }
}

double withdraw(double balance) {
    // Makes a withdraw.
    system("clear");
    double value;

    cout << "Value to withdraw: $";
    cin >> value;
    
    if (value < 0) {
        cout << "Not a valid amount!" << endl;
        return balance;
    } else if (balance < value) {
        cout << "Not enough balance!" << endl;
        return balance;
    } else {
        return balance - value;
    }
}
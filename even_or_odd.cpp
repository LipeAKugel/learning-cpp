// checks if a given integer is even or odd.
#include <iostream>
using namespace std;

int main() {

    int number;

    cout << "Enter an integer: ";
    cin >> number;

    if ((number % 2) == 0) {
        cout << "The number is even\n";
    } else {
        cout << "The number is odd\n";
    }

    return 0;
}
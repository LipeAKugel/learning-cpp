#include <iostream>
#include <ctime>
using namespace std;

int main() {
    // pseudo-random = NOT truly random (but close)

    srand(time(NULL));

    int num1 = rand() % 7; // generates a random number between 0 and 6.
    int num2 = rand() % 7;
    int num3 = rand() % 7;

    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;

    return 0;
}
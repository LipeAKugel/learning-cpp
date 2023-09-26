#include <iostream>
#include <ctime>
using namespace std;

int main() {
    int number;
    int guess;
    int tries = 1;

    srand(time(NULL));
    number = (rand() % 10) + 1; // generates a number between 1 and 10.

    cout << "A random number between 1 and 10 was generated.\n";
    cout << "Try to guess it! ";

    while (true) {
        cin >> guess;

        if (guess == number) {
            cout << "You guessed the number after " << tries << " attempts!\n";
            break;
        } else if (guess < number){
            cout << "Too low! " ;
            tries++;
        } else if (guess > number){
            cout << "Too high! " ;
            tries++;
        }
    }

    return 0;
}
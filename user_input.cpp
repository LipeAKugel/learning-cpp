// asks the user for their name and greets them.
#include <iostream>
using namespace std;

int main() {
    string name;

    cout << "What's your name? ";
    getline(cin >> ws, name);

    cout << "Hello, " << name << "!\n";

    return 0;
}
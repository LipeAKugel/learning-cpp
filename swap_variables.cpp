// swaps the values of two variables without temporary variables.
#include <iostream>
using namespace std;

int main() {
    int x, y;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    x += y;
    y -= x;
    y = -y;
    x -= y;

    cout << "Swapped numbers: " << x << " " << y << endl;

    return 0;
}
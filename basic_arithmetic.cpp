// takes two numbers as input, 
// and calculates their sum, difference, product and quotient.
#include <iostream>
using namespace std;

int main() {
    int x, y;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Sum: " << x+y << endl;
    cout << "Difference: " << x-y << endl;
    cout << "Product: " << x*y << endl;
    cout << "Quotient: " << x/y << endl;

    return 0;
}
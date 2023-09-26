// function that converts temperature from
// celsius to fahrenheit and vice versa.
#include <iostream>
using namespace std;

float celsius2fahrenheit(float temp) {
    temp = (9.0/5.0)*(temp + 32.0);
    return temp;
}

float fahrenheit2celsius(float temp) {
    temp = (5.0/9.0)*(temp - 32.0);
    return temp;
}

int main() {
    float temp;
    char conversion;

    cout << "C - Fahrenheit to Celsius\tF - Celsius to Fahrenheit\n";
    cout << "Enter the type of conversion: ";
    cin >> conversion;

    switch (conversion) {
        case 'C':
            cout << "Enter the temperature in Fahrenheit to convert: ";
            cin >> temp;
            temp = fahrenheit2celsius(temp);
            cout << "Temperature in Celsius: " << temp << endl;
            break;
        case 'F':
            cout << "Enter the temperature in Celsius to convert: ";
            cin >> temp;
            temp = celsius2fahrenheit(temp);
            cout << "Temperature in Fahrenheit: " << temp << endl;
            break;
        default:
            cout << "Invalid conversion." << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

const int NUMBER_SIZE = 16;

bool validateCardNumber(string number, int size);
void stringIntoIntArray(string numberString, int* digits);
void invertArray(int* digits);
void duplicateEveryOther(int* digits);
int sumDigits(int* digits);

int main() {
    string credit_number;

    cout << "Enter a credit card number: ";
    getline(cin, credit_number);

    if (validateCardNumber(credit_number, credit_number.size()) == true) {
        cout << "The credit card number is valid!\n";
    } else {
        cout << "Invalid credit card number!\n";
    }

    return 0;
}

bool validateCardNumber(string numberString, int size) {

    if (size == NUMBER_SIZE) {
        // Verify if the string only contains digits.
        for (char digit : numberString) {
            if (isdigit(digit) == false) {
                return false;
            }
        }

        int digits[NUMBER_SIZE];

        stringIntoIntArray(numberString, digits);
        invertArray(digits);
        duplicateEveryOther(digits);

        if (sumDigits(digits) % 10 == 0) {
            return true;
        } else {
            return false;
        }

    } else {
        return false;
    }
}

void stringIntoIntArray(string numberString, int* digits) {
    for (int i = 0; i < NUMBER_SIZE; i++) {
        int digit = numberString[i] - '0';
        digits[i] = digit;
    }
}

void invertArray(int* digits) {
    for (int i = 0; i < NUMBER_SIZE/2; i++) {
        int temp = digits[NUMBER_SIZE-1-i];
        digits[NUMBER_SIZE-1-i] = digits[i];
        digits[i] = temp;
    }
}

void duplicateEveryOther(int* digits) {
    for (int i = NUMBER_SIZE-1; i >= 0; i--) {
        if (i % 2 != 0) {
            digits[i] *= 2;
            if (digits[i] > 9) {
                digits[i] -= 9;
            } 
        }
    }
}

int sumDigits(int* digits) {
    int sum = 0;
    for (int i = 0; i < NUMBER_SIZE; i++) {
        sum += digits[i];
    }
    return sum;
}
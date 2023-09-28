#include <iostream>
using namespace std;

int main() {

    int* pGrades;
    int numGrades;

    cout << "Number of grades to enter: ";
    cin >> numGrades;

    pGrades = new int[numGrades];

    for (int i = 0; i < numGrades; i++) {
        cout << "Grade #" << i + 1 << ": ";
        cin >> pGrades[i];
    }

    cout << "Grades:\n";
    for (int i = 0; i < numGrades; i++) {
        cout << "#" << i+1 << ": " << pGrades[i] << "\n";
    }

    delete[] pGrades;

    return 0;
}
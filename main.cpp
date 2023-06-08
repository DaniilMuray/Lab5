
#include "TIntNumber.h"


int main() {
    int m, n;
    cout << "Enter the number of binary numbers (m): ";
    cin >> m;
    cout << "Enter the number of octal numbers (n): ";
    cin >> n;

    auto binaryNumbers = new TIntNumber2[m];
    auto octalNumbers = new TIntNumber8[n];



    for (int i = 0; i < m; i++) {
        binaryNumbers[i].input();
    }

    for (int i = 0; i < n; i++) {
        octalNumbers[i].input();
    }

    int binarySum = 0;
    for (int i = 0; i < m; i++) {
        binarySum += binaryNumbers[i].getValue();
    }

    int octalSum = 0;
    for (int i = 0; i < n; i++) {
        octalSum += octalNumbers[i].getValue();
    }


    cout << "Sum of binary numbers: " << binarySum << endl;
    cout << "Sum of octal numbers: " << octalSum << endl;


    TIntNumber octalSumObj;
    octalSumObj.setValue(stoi(to_string(octalSum), nullptr, 8)); // Convert octalSum from octal to decimal
    string octalSumBinary = octalSumObj.convertToBase(2); // Converting octal sum to binary
    cout << "Octal sum in binary: " << octalSumBinary << endl;

    if (binarySum < octalSum) {
        cout << "Sum of binary numbers is smaller." << endl;
    }
    else if (binarySum > octalSum) {
        cout << "Sum of octal numbers is smaller." << endl;
    }
    else {
        cout << "Sum of binary and octal numbers is equal." << endl;
    }

    delete[] binaryNumbers;
    delete[] octalNumbers;

    return 0;
}

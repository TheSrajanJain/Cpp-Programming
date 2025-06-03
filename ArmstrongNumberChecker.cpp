#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int number, originalNumber, remainder, n = 0;
    double result = 0.0;

    cout << "Armstrong Number Checker\n";
    cout << "Enter an integer: ";
    cin >> number;

    originalNumber = number;

    // Find the number of digits
    while (originalNumber != 0) {
        originalNumber /= 10;
        ++n;
    }

    originalNumber = number;

    // Calculate the sum of nth power of each digit
    while (originalNumber != 0) {
        remainder = originalNumber % 10;
        result += pow(remainder, n);
        originalNumber /= 10;
    }

    if (static_cast<int>(result) == number)
        cout << number << " is an Armstrong number." << endl;
    else
        cout << number << " is not an Armstrong number." << endl;

    return 0;
}

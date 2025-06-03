#include <iostream>
using namespace std;

int main() {
    int number, sum = 0;

    cout << "Sum of Digits of a Number\n";
    cout << "Enter a positive integer: ";
    cin >> number;

    while (number != 0) {
        sum += number % 10;
        number /= 10;
    }

    cout << "Sum of digits = " << sum << endl;

    return 0;
}

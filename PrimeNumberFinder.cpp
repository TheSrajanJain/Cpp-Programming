#include <iostream>
using namespace std;

int main() {
    int number, i;
    bool isPrime = true;

    cout << "Prime Number Checker\n";
    cout << "Enter a positive integer: ";
    cin >> number;

    if (number <= 1) {
        isPrime = false;
    } else {
        for (i = 2; i * i <= number; i++) {
            if (number % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime)
        cout << number << " is a prime number." << endl;
    else
        cout << number << " is not a prime number." << endl;

    return 0;
}

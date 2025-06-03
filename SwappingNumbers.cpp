#include <iostream>
using namespace std;

int main() {
    int a, b, temp;

    cout << "Swapping Numbers\n";
    cout << "Enter first number (a): ";
    cin >> a;
    cout << "Enter second number (b): ";
    cin >> b;

    cout << "\nBefore swapping:\na = " << a << ", b = " << b << endl;

    // Swapping using a temporary variable
    temp = a;
    a = b;
    b = temp;

    cout << "After swapping (using temp variable):\na = " << a << ", b = " << b << endl;

    // Swapping back without using a temporary variable
    a = a + b;
    b = a - b;
    a = a - b;

    cout << "After swapping again (without temp variable):\na = " << a << ", b = " << b << endl;

    return 0;
}

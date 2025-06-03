#include <iostream>
using namespace std;

int main() {
    int num, i;

    cout << "Multiplication Table Generator\n";
    cout << "Enter a number: ";
    cin >> num;

    cout << "Multiplication Table for " << num << ":\n";

    for (i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }

    return 0;
}

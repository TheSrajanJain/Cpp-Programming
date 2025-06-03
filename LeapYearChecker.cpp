#include <iostream>
using namespace std;

int main() {
    int year;

    cout << "Leap Year Checker\n";
    cout << "Enter a year: ";
    cin >> year;

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0)
                cout << year << " is a Leap Year." << endl;
            else
                cout << year << " is NOT a Leap Year." << endl;
        } else {
            cout << year << " is a Leap Year." << endl;
        }
    } else {
        cout << year << " is NOT a Leap Year." << endl;
    }

    return 0;
}

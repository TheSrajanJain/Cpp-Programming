#include <iostream>
using namespace std;

int main() {
    double principal, rate, time, interest;

    cout << "Simple Interest Calculator\n";
    cout << "Enter Principal Amount (P): ";
    cin >> principal;

    cout << "Enter Rate of Interest (R in %): ";
    cin >> rate;

    cout << "Enter Time (T in years): ";
    cin >> time;

    interest = (principal * rate * time) / 100;

    cout << "Simple Interest = " << interest << endl;
    cout << "Total Amount = " << principal + interest << endl;

    return 0;
}

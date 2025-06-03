#include <iostream>
using namespace std;

int main() {
    int choice;
    double input, result;

    cout << "Unit Converter\n";
    cout << "1. Kilometers to Miles\n";
    cout << "2. Miles to Kilometers\n";
    cout << "3. Centimeters to Inches\n";
    cout << "4. Inches to Centimeters\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    cout << "Enter the value to convert: ";
    cin >> input;

    switch (choice) {
        case 1:
            result = input * 0.621371;
            cout << input << " km = " << result << " miles" << endl;
            break;
        case 2:
            result = input / 0.621371;
            cout << input << " miles = " << result << " km" << endl;
            break;
        case 3:
            result = input * 0.393701;
            cout << input << " cm = " << result << " inches" << endl;
            break;
        case 4:
            result = input / 0.393701;
            cout << input << " inches = " << result << " cm" << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}

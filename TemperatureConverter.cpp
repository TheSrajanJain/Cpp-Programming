#include <iostream>
using namespace std;

int main() {
    double temperature;
    char unit;

    cout << "Temperature Converter\n";
    cout << "Enter temperature followed by unit (C for Celsius, F for Fahrenheit): ";
    cin >> temperature >> unit;

    if (unit == 'C' || unit == 'c') {
        double fahrenheit = (temperature * 9.0 / 5.0) + 32;
        cout << temperature << "°C is " << fahrenheit << "°F" << endl;
    } else if (unit == 'F' || unit == 'f') {
        double celsius = (temperature - 32) * 5.0 / 9.0;
        cout << temperature << "°F is " << celsius << "°C" << endl;
    } else {
        cout << "Invalid unit! Please use C for Celsius or F for Fahrenheit." << endl;
    }

    return 0;
}

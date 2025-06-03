#include <iostream>
using namespace std;

int main() {
    double weight, height, bmi;

    cout << "BMI (Body Mass Index) Calculator\n";
    cout << "Enter weight in kilograms: ";
    cin >> weight;

    cout << "Enter height in meters: ";
    cin >> height;

    if (height <= 0) {
        cout << "Height must be greater than 0!" << endl;
        return 1;
    }

    bmi = weight / (height * height);

    cout << "Your BMI is: " << bmi << endl;

    if (bmi < 18.5)
        cout << "Category: Underweight" << endl;
    else if (bmi >= 18.5 && bmi < 25)
        cout << "Category: Normal weight" << endl;
    else if (bmi >= 25 && bmi < 30)
        cout << "Category: Overweight" << endl;
    else
        cout << "Category: Obese" << endl;

    return 0;
}

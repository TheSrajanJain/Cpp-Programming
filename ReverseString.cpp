#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, reversed;

    cout << "Reverse a String\n";
    cout << "Enter a string: ";
    getline(cin, str);

    for (int i = str.length() - 1; i >= 0; i--) {
        reversed += str[i];
    }

    cout << "Reversed string: " << reversed << endl;

    return 0;
}

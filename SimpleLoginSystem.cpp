#include <iostream>
#include <string>
using namespace std;

int main() {
    string username, password;
    string correctUsername = "admin";
    string correctPassword = "password123";

    cout << "Simple Login System\n";

    cout << "Enter username: ";
    cin >> username;

    cout << "Enter password: ";
    cin >> password;

    if (username == correctUsername && password == correctPassword) {
        cout << "Login successful! Welcome, " << username << "." << endl;
    } else {
        cout << "Login failed! Incorrect username or password." << endl;
    }

    return 0;
}

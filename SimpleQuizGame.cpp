#include <iostream>
#include <string>
using namespace std;

int main() {
    int score = 0;
    string answer;

    cout << "Simple Quiz Game\n";

    cout << "Q1. What is the capital of France?\n";
    cout << "a) Berlin\nb) Madrid\nc) Paris\nd) Rome\n";
    cout << "Your answer: ";
    cin >> answer;
    if (answer == "c" || answer == "C") score++;

    cout << "Q2. Who wrote 'Romeo and Juliet'?\n";
    cout << "a) Charles Dickens\nb) William Shakespeare\nc) Mark Twain\nd) Leo Tolstoy\n";
    cout << "Your answer: ";
    cin >> answer;
    if (answer == "b" || answer == "B") score++;

    cout << "Q3. What is the largest planet in our solar system?\n";
    cout << "a) Earth\nb) Mars\nc) Jupiter\nd) Saturn\n";
    cout << "Your answer: ";
    cin >> answer;
    if (answer == "c" || answer == "C") score++;

    cout << "You scored " << score << " out of 3." << endl;

    if (score == 3)
        cout << "Excellent! You know your stuff.\n";
    else if (score == 2)
        cout << "Good job! A little more practice and you'll ace it.\n";
    else
        cout << "Keep learning! Practice makes perfect.\n";

    return 0;
}

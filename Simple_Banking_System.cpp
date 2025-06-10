#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

class Account {
    int accNo;
    string name;
    double balance;

public:
    Account() {}
    void createAccount();
    void showAccount() const;
    void deposit(double);
    void withdraw(double);
    int getAccNo() const { return accNo; }
    double getBalance() const { return balance; }
    string getName() const { return name; }
};

void Account::createAccount() {
    cout << "\nEnter Account Number: ";
    cin >> accNo;
    cin.ignore();
    cout << "Enter Account Holder Name: ";
    getline(cin, name);
    cout << "Enter Initial Deposit Amount: ";
    cin >> balance;
    cout << "\nAccount Created Successfully!\n";
}

void Account::showAccount() const {
    cout << "\nAccount No.: " << accNo;
    cout << "\nHolder Name: " << name;
    cout << "\nBalance: ₹" << fixed << setprecision(2) << balance << endl;
}

void Account::deposit(double amt) {
    balance += amt;
    cout << "\nAmount Deposited Successfully!";
}

void Account::withdraw(double amt) {
    if (balance >= amt) {
        balance -= amt;
        cout << "\nAmount Withdrawn Successfully!";
    } else {
        cout << "\nInsufficient Balance!";
    }
}

// --- File operations ---
void writeAccount();
void displayAccount(int);
void depositWithdraw(int, int); // 1: deposit, 2: withdraw
void menu();

int main() {
    menu();
    return 0;
}

void menu() {
    int choice, num;
    do {
        cout << "\n\n===== Banking System Menu =====";
        cout << "\n1. Create New Account";
        cout << "\n2. View Account";
        cout << "\n3. Deposit Amount";
        cout << "\n4. Withdraw Amount";
        cout << "\n5. Exit";
        cout << "\nEnter Your Choice (1-5): ";
        cin >> choice;

        switch (choice) {
        case 1:
            writeAccount();
            break;
        case 2:
            cout << "\nEnter Account Number: ";
            cin >> num;
            displayAccount(num);
            break;
        case 3:
            cout << "\nEnter Account Number: ";
            cin >> num;
            depositWithdraw(num, 1);
            break;
        case 4:
            cout << "\nEnter Account Number: ";
            cin >> num;
            depositWithdraw(num, 2);
            break;
        case 5:
            cout << "\nThank you for using our banking system. Goodbye!\n";
            break;
        default:
            cout << "\nInvalid Choice. Try again!";
        }
    } while (choice != 5);
}

void writeAccount() {
    Account acc;
    acc.createAccount();

    ofstream outFile("accounts.dat", ios::binary | ios::app);
    outFile.write(reinterpret_cast<char*>(&acc), sizeof(Account));
    outFile.close();
}

void displayAccount(int n) {
    Account acc;
    ifstream inFile("accounts.dat", ios::binary);
    bool found = false;

    while (inFile.read(reinterpret_cast<char*>(&acc), sizeof(Account))) {
        if (acc.getAccNo() == n) {
            acc.showAccount();
            found = true;
            break;
        }
    }
    inFile.close();
    if (!found)
        cout << "\nAccount not found!";
}

void depositWithdraw(int n, int option) {
    Account acc;
    fstream file("accounts.dat", ios::binary | ios::in | ios::out);
    bool found = false;

    while (!file.eof()) {
        streampos pos = file.tellg();
        if (file.read(reinterpret_cast<char*>(&acc), sizeof(Account))) {
            if (acc.getAccNo() == n) {
                double amt;
                if (option == 1) {
                    cout << "\nEnter Amount to Deposit: ";
                    cin >> amt;
                    acc.deposit(amt);
                } else {
                    cout << "\nEnter Amount to Withdraw: ";
                    cin >> amt;
                    acc.withdraw(amt);
                }
                file.seekp(pos);
                file.write(reinterpret_cast<char*>(&acc), sizeof(Account));
                found = true;
                break;
            }
        }
    }
    file.close();
    if (!found)
        cout << "\nAccount not found!";
}

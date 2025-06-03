#include <iostream>
using namespace std;

int main() {
    double usd, inr;
    const double usdToInrRate = 82.50;

    cout << "Currency Converter (USD to INR)\n";
    cout << "Enter amount in USD: ";
    cin >> usd;

    inr = usd * usdToInrRate;

    cout << usd << " USD = " << inr << " INR" << endl;

    return 0;
}

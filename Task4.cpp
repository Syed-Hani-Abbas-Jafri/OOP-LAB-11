#include <iostream>
#include <stdexcept>
using namespace std;

class InsufficientFundsException : public exception {
public:
    const char *what() const noexcept override {
        return "Insufficient funds to complete withdrawal!";
    }
};

class BankAccount {
    double blnc;
public:
    BankAccount(double amt) : blnc(amt) {}
    void withdraw(double wamt) {
        if (wamt > blnc)
            throw InsufficientFundsException();
        blnc -= wamt;
        cout << "Withdrawal successful! New Balance: $" << blnc << endl;
    }
    double getBalance() const { return blnc; }
};

int main() {
    BankAccount acx(500);
    double wval;

    cout << "Current Balance: $" << acx.getBalance() << endl;
    cout << "Enter withdrawal amount: $";
    cin >> wval;

    try {
        acx.withdraw(wval);
    } catch (const InsufficientFundsException &ex) {
        cout << "Error: " << ex.what() << endl;
    }

    return 0;
}

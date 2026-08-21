#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    string accountHolder;
    double balance;

public:
    BankAccount(int accNo, string name, double initialBalance) {
        accountNumber = accNo;
        accountHolder = name;
        balance = initialBalance;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Amount deposited: Rs. " << amount << endl;
        }
    }

    void withdraw(double amount) {
        double fee = 10;

        if (amount + fee <= balance) {
            balance -= (amount + fee);
            cout << "Amount withdrawn: Rs. " << amount << endl;
            cout << "Transaction fee: Rs. " << fee << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }

    void applyInterest(double rate) {
        double interest = balance * rate / 100;
        balance += interest;

        cout << "Interest added: Rs. " << interest << endl;
    }

    void displayAccount() {
        cout << "\n----- Account Statement -----" << endl;
        cout << "Account Number : " << accountNumber << endl;
        cout << "Account Holder : " << accountHolder << endl;
        cout << "Balance        : Rs. " << balance << endl;
        cout << "-----------------------------" << endl;
    }
};

int main() {
    BankAccount account(101, "Hetvi", 5000);

    account.displayAccount();

    account.deposit(2000);

    account.withdraw(1000);

    account.applyInterest(5);

    account.displayAccount();

    return 0;
}
#include <iostream>
using namespace std;

class Bank {
    public:
        double money = 0;

        void deposit(double amount) {
            if(!(amount > 0)) {
                cout << "------------ ERROR: Check again your amount and/or the value that you specified in this function." << endl;
            } else {
                money += amount;
                cout << "Deposited " << amount << " in the account." << endl;
            }
        }

        void withdraw(double amount) {
            if(amount > money || !(amount > 0)) {
                cout << "------------ ERROR: Check again your amount and/or the value that you specified in this function." << endl;
            } else {
                money -= amount;
                cout << "Withdrawed " << amount << " from the account." << endl;
            }
        }

        void showBankValue() {
            cout << "Bank value: " << money << endl;
        }
};

/*

    !!!!!!! This is an exeample of the program being used.

    int main() {
        Bank acc;
        acc.showBankValue();
        acc.deposit(123);
        acc.withdraw(200);
        acc.withdraw(-3);
        acc.withdraw(23);
        acc.showBankValue();
        return 0;
    }
*/
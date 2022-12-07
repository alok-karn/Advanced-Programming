#include<bits/stdc++.h>
using namespace std;

class Account {
    public:
        string Name;
        int AccNum;
        double Balance;
        Account(string name, int accNum, float balance) {
            Name = name;
            AccNum = accNum;
            Balance = balance;
        }
        void Transaction() {
            cout << "The current balance is " << Balance << endl;
        }
        void Transaction(int x) {
            Balance -= x;
            cout << "The withdrawn amount is " << x << endl;
            cout << "The available balance is " << Balance << endl;
        }
        void Transaction(double y) {
            Balance += y;
            cout << "The deposited amount is " << y << endl;
            cout << "The available balance is " << Balance << endl;
        }
};

int main() {
    Account acc("John", 1234, 1000.25);
    acc.Transaction();
    acc.Transaction(500);
    acc.Transaction(300.25);
}

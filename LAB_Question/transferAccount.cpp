#include<bits/stdc++.h>
using namespace std;

class Account2;
class Account1 {
    public:
    int balance;
    public:
    void readBalance() {
        cout << "Enter balance :: " << endl;
        cin >> balance;
    }
    void showContent() {
        cout << "Balance- " << balance << endl;
    }
    friend void transfer(Account1, Account2);
};

class Account2 {
    public:
    int balance;
    public:
    void readBalance() {
        cout << "Enter balance :: " << endl;
        cin >> balance;
    }
    void showContent() {
        cout << "Balance- " << balance << endl;
    }
    friend void transfer(Account1, Account2);
};

void transfer(Account1 a1, Account2 a2) {
    int amount;
    cout << "Enter amount to transfer :: " << endl;
    cin >> amount;
    a1.balance -= amount;
    a2.balance += amount;
    cout << "After transfer :: " << endl;
    a1.showContent();
    a2.showContent();
}

int main() {
    Account1 a1;
    Account2 a2;
    a1.readBalance();
    a2.readBalance();
    a1.showContent();
    a2.showContent();
    transfer(a1, a2);
    return 0;
}
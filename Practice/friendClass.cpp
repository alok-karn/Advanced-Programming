#include<bits/stdc++.h>
using namespace std;
class bank2;
class bank1 {
    int balance;
    public:
        void setBalance() {
           cout << "Enter balance: ";
           cin>>balance;
        }
        void getBalance() {
            cout<<balance<<endl;
        }
        friend void transfer(bank1 &b1, bank2 &b2);
};
class bank2 {
    int balance;
    public:
        void setBalance() {
           cin>>balance;
        }
        void getBalance() {
            cout<<balance<<endl;
        }
        friend void transfer(bank1 &b1, bank2 &b2);
};
void transfer(bank1 &b1, bank2 &b2) {
    int temp = b1.balance;
    b1.balance = b2.balance;
    b2.balance = temp;
};
int main() {
    bank1 b1;
    bank2 b2;
    b1.setBalance();
    b2.setBalance();
    transfer(b1, b2);
    b1.getBalance();
    b2.getBalance();
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

class B {
    int a, b;
    protected:
        int x, y;
    public:
        int c;
        void readParent() {
            cout << "Enter a, b, c" << endl;
            cin >> a >> b >> c;
        }
        void print() {
            cout << "base" << endl 
            << "a: " << a << endl
            << "b: " << b << endl
            << "x: " << x << endl
            << "y: " << y << endl
            << "c: " << c << endl;
        }
};

class A : private B {
    int d;
    public:
        int e;
        void readChild() {
            cin >> d >> e;
        }
        void disp() {
            cout << "derived" << endl
            << "d: " << d << endl
            << "e: " << e << endl;
        }
};

int main() {
    A A1;
    A1.readPrint(); // ERROR
    A1.disp();
    B B1;
    B1.readParent();
    B1.print();
    B1.x;
}

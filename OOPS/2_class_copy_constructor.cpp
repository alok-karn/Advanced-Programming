#include<bits/stdc++.h>
using namespace std;

class Copy {
    int x;
    public:
        Copy() {
            cout << "This is default constructor " << endl;
        }
        Copy(int x) {
            this->x = x;
        }
        Copy(Copy &c) {
            x = c.x;
            cout << "This is copy constructor " << endl;
        }
       
        void display() {
            cout << "x = " << x << endl;
        }
};
int main() {
    Copy c1;
    Copy c2(10);
    Copy c3(c2);
    c1.display();
    c2.display();
    c3.display();
    
}

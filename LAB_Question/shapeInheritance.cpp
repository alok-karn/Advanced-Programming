#include<bits/stdc++.h>
using namespace std;

class Shape {
    public:
    int length;
    int breadth;
    public: 

        
        void input() {
            cout << "Enter length" << endl;
            cin >> this->length;
            cout << "Enter breadth" << endl;
            cin >> this->breadth;
        }
};

class Rectangle: public Shape {
    public:
    int area;
    Rectangle() { }
    Rectangle(int len, int bre) {
        length = len;
        breadth = bre;
    }
    int findArea() {
        return length * breadth;
    }
    void dispaly() {
        area = findArea();
        cout << "The area is:: " << area << endl;
    }

};

int main() {
    Rectangle R1;
    R1.input();
    R1.findArea();
    R1.dispaly();
    return 0;

}
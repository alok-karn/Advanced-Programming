#include<bits/stdc++.h>
using namespace std;

class Student {
    int RollNum;
    string Name;
    int Per;

    public:
    static int cntr;
        Student(){
            //default constructor
            RollNum = 0;
            Name = "null";
            Per = 0;

            ++cntr;
        }
    
        Student(int rollNum, string name, int per) {
            RollNum = rollNum;
            Name = name;
            Per = per;
            ++cntr;
            cout << "COUNT- " << cntr << endl;
        }
        void showContent() {
            cout << "RollNum- " << RollNum << endl;
            cout << "Name- " << Name << endl;
            cout << "Per- " << Per << endl;
        }

        
};

int Student::cntr = 1;
int main() {
    Student A(12, "Rahul", 75);
    Student B;
    A.showContent();
    B.showContent();
    return 0;
}
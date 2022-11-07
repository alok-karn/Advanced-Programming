#include<bits/stdc++.h>
using namespace std;

class Person {
    string Name;
    protected:
        int Age;
    public:
        void read() {
            cout << "Enter Name" << endl;
            cin >> Name;
            cout << "Enter Age" << endl;
            cin >> Age;
        }
        void display() {
            cout << "Name: " << Name << endl;
            cout << "Age: " << Age << endl;
        }
};

class Student : public Person {
    int RegNo;
    float cgpa;
    public:
        void readStud() {
            read();
            cout << "Enter RegNo" << endl;
            cin >> RegNo;
            cout << "Enter cgpa" << endl;
            cin >> cgpa;
        }
        void displayStud() {
            display();
            cout << "RegNo: " << RegNo << endl;
            cout << "cgpa: " << cgpa << endl;
        }
};

class Faculty : public Person {
    int yearOfExp;
    float Salary;
    public:
        void readFac() {
            read();
            cout << "Enter yearOfExp" << endl;
            cin >> yearOfExp;
            cout << "Enter Salary" << endl;
            cin >> Salary;
        }
        void displayFac() {
            display();
            cout << "yearOfExp: " << yearOfExp << endl;
            cout << "Salary: " << Salary << endl;
        }
};

int main() {
    Student s;
    Faculty f;
    s.readStud();
    f.readFac();
    s.displayStud();
    f.displayFac();
    return 0;
}
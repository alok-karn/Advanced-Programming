#include<bits/stdc++.h>
using namespace std;

class Student {
    protected:
        int RegNo;
    private:
        float cgpa;
    public:
        void readStud() {
            cout << "Enter RegNo" << endl;
            cin >> RegNo;
            cout << "Enter cgpa" << endl;
            cin >> cgpa;
        }
        void displayStud() {
            cout << "RegNo: " << RegNo << endl;
            cout << "cgpa: " << cgpa << endl;
        }
};

class Employee {
    int yearOfExp;
    protected:
        float Salary;
    public: 
        void readFac() {
            cout << "Enter yearOfExp" << endl;
            cin >> yearOfExp;
            cout << "Enter Salary" << endl;
            cin >> Salary;
        }
        void displayFac() {
            cout << "yearOfExp: " << yearOfExp << endl;
            cout << "Salary: " << Salary << endl;
        }
};

class TA : public Student, public Employee {
    public: 
        void readTA() {
            readStud();
            readFac();
        }
        void displayTA() {
            displayStud();
            displayFac();
        }
};

class Faculty : public Employee {
    int hoursPerWeek;
    public:
        void readTA() {
            readFac();
            cout << "Enter hoursPerWeek" << endl;
            cin >> hoursPerWeek;
        }
        void displayTA() {
            displayFac();
            cout << "hoursPerWeek: " << hoursPerWeek << endl;
        }
};

int main() {
    TA t;
    t.readTA();
    t.displayTA();

    Faculty f;
    f.readTA();
    f.displayTA();
    return 0;
}
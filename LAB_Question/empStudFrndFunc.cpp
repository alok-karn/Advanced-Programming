#include<bits/stdc++.h>
using namespace std;

class Student;
class Employee {
    public:
        string empName;
        int Age;
        float Salary;

        void readData(){
            cout << "Enter Employee Name" << endl;
            cin >> empName;
            cout << "Enter Employee Age" << endl;
            cin >> Age;
            cout << "Enter Employee Salary" << endl;
            cin >> Salary;
        }
        void displayData() {
            cout << "Employee Name: " << empName << endl;
            cout << "Employee Age: " << Age << endl;
            cout << "Employee Salary: " << Salary << endl;
        }
        friend int findAgeDiff(Employee, Student);
};

class Student {
    public:
        string studName;
        int Age;
        float cgpa;

        void readData(){
            cout << "Enter Student Name" << endl;
            cin >> studName;
            cout << "Enter Student Age" << endl;
            cin >> Age;
            cout << "Enter Student cgpa" << endl;
            cin >> cgpa;
        }

        void displayData() {
            cout << "Student Name: " << studName << endl;
            cout << "Student Age: " << Age << endl;
            cout << "Student cgpa: " << cgpa << endl;
        }

        friend int findAgeDiff(Employee, Student);
};

int findAgeDiff(Employee E, Student S) {
    return (E.Age - S.Age);
}

int main() {
    Employee E;
    Student S;
    E.readData();
    S.readData();
    E.displayData();
    S.displayData();
    cout << "Age Difference is: " << findAgeDiff(E, S) << endl;
    return 0;

}
#include<bits/stdc++.h>
using namespace std;
class Student;
class Employee {
    public:
        string empName;
        int Age;
        float Salary;
        friend bool checkName(Employee, Student);
};
class Student {
    public:
        string studName;
        int Age;
        float cgpa;
        friend bool checkName(Employee, Student);
};

bool checkName(Employee E, Student S) {
    return (E.empName == S.studName) ? true : false;
}

int main() {
    Employee E;
    Student S;
    cout << "Enter Employee Name" << endl;
    cin >> E.empName;
    cout << "Enter Employee Age" << endl;
    cin >> E.Age;
    cout << "Enter Employee Salary" << endl;
    cin >> E.Salary;
    cout << "Enter Student Name" << endl;
    cin >> S.studName;
    cout << "Enter Student Age" << endl;
    cin >> S.Age;
    cout << "Enter Student cgpa" << endl;
    cin >> S.cgpa;
    if(checkName(E, S)) {
        cout << "Name is same" << endl;
    } else {
        cout << "Name is not same" << endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

class Employee {
    public:
        string empName;
        int Age;
        void read() {
            cout << "Enter Employee Name" << endl;
            cin >> empName;
            cout << "Enter Employee Age" << endl;
            cin >> Age;
        }
        void display() {
            cout << "Employee Name: " << empName << endl;
            cout << "Employee Age: " << Age << endl;
        }

        Employee addAge(Employee e1, Employee e2) {
            Employee empRet;
            empRet.Age = e1.Age + e2.Age;
            empRet.empName = e1.empName.append(e2.empName);
            return empRet;
        }

};

int main() {
    Employee e1, e2, e3;
    e1.read();
    e2.read();
    e3 = e3.addAge(e1, e2);
    e3.display();
    return 0;
}
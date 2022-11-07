#include<bits/stdc++.h>
using namespace std;

class Employee {
    private: 
        char name[20];
        int age;
        float sal;
    public:
        Employee() {
            cout << "Reached No argument constructor" << endl;
            strcpy(name, "");
            age = 0;
            sal = 0;
        }
        Employee(char *n, int a, float s) {
            cout << "Reached 3 argument constructor" << endl;
            strcpy(name, n);
            this->age = a;
            this->sal = s;

        }
        void setData(char *n, int a, float s) {
            strcpy(name, n);
            this->age = a;
            this->sal = s;
        }
        void showData() {
            cout << "Name: " << name << endl
                    << "Age: " << age << endl
                    << "Salary: " << sal << endl;
        }
        ~Employee() {
            cout << "Reached Destructor" << endl;
        }
};

int main() {
    Employee *p;
    p = new Employee;
    p->setData("Rahul", 20, 10000);
    Employee *q;
    q = new Employee("Ajay", 20, 120000);
    p->showData();
    q->showData();

    delete p;
    delete q;
    return 0;
}
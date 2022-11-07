#include <iostream>
using namespace std;
class student
{
public:
    int roll_no;
    string Name;
    int Age;
    int Marks;
    void display()
    {
        cout << "Roll No: " << roll_no << endl;
        cout << "Name: " << Name << endl;
        cout << "Age: " << Age << endl;
        cout << "Marks: " << Marks << endl;
    }
    student(int Roll, string name, int age, int marks)
    {
        roll_no = Roll;
        Name = name;
        Age = age;
        Marks = marks;
    }
};

class teacher
{
public:
    int id;
    string Name;
    int Age;
    int Salary;
    void display()
    {
        cout << "ID: " << id << endl;
        cout << "Name: " << Name << endl;
        cout << "Age: " << Age << endl;
        cout << "Salary: " << Salary << endl;
    }
    teacher(int ID, string name, int age, int salary)
    {
        id = ID;
        Name = name;
        Age = age;
        Salary = salary;
    }
};

int main()
{
    student s1(1, "Rahul", 20, 90);
    s1.display();
    teacher t1(101, "John", 20, 90000);
    t1.display();
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

class Student {
    string Name;
    int ID;
    int Marks;
    string Branch;

    public:
        void display() {
            cout << "Name: " << Name << endl;
            cout << "ID: " << ID << endl;
            cout << "Marks: " << Marks << endl;
            cout << "Branch: " << Branch << endl;
        }

        Student(string name, int id, int marks, string branch) {
            Name = name;
            ID = id;
            Marks = marks;
            Branch = branch;
        }
};

int main() {
    Student s1("Rahul", 1, 100, "CSE");
    s1.display();
    return 0;
}
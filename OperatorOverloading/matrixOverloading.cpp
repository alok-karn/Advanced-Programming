#include<bits/stdc++.h>
using namespace std;
#define rs 100
#define cs 100
class Matrix {
    public:

        int row = 0;
        int col = 0;
        Matrix(int r, int c) {
            row = r;
            col = c;
        }

        int a[rs][cs];
        Matrix() {
            for (int i = 0; i < row; i++) {
                for (int j = 0; j < col; j++) {
                    a[i][j] = 0;
                }
            }
        }
       bool operator == (Matrix &obj) {
                if(row == obj.col){
                    return true;
                } return false;
            }

        friend istream & operator >> (istream &in, Matrix &obj);
        friend ostream & operator << (ostream &out, Matrix &obj);
};

istream & operator >> (istream &in, Matrix &obj) {
    cout << "Enter elements of matrix: " << endl;
    for (int i = 0; i < obj.row; i++) {
        for (int j = 0; j < obj.col; j++) {
            in >> obj.a[i][j];
        }
    }
    return in;
}

ostream & operator << (ostream &out, Matrix &obj) {
    for (int i = 0; i < obj.row; i++) {
        for (int j = 0; j < obj.col; j++) {
            out << obj.a[i][j] << " ";
        }
        out << endl;
    }
    return out;
}

int main() {
    Matrix m1(2,2), m2(2,2);
    cin >> m1;
    cin >> m2;
    if (m1 == m2) {
        cout << "Matrices addition can be done" << endl;
    } else {
        cout << "Matrices addition cannot be done" << endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

class Matrix {
    private: 
        int maxrow, maxcol;
        int *ptr;
    public:
        Matrix(int r, int c) {
            maxrow = r;
            maxcol = c;
            ptr = new int[r * c];
        }
        void getmat() {
            int i, j, mat_off;

            cout << "Enter elements into matrix" << endl;
            for(i = 0; i < maxrow; i++) {
                for(j = 0; j < maxcol; j++) {
                    mat_off = i * maxcol + j;
                    cin >> ptr[mat_off];
                }
            }
        }

        void printmat() {
            int i, j, mat_off;

            cout << "Matrix is:" << endl;
            for(i = 0; i < maxrow; i++) {
                for(j = 0; j < maxcol; j++) {
                    mat_off = i * maxcol + j;
                    cout << setw(3) << ptr[mat_off];
                }
                cout << endl;
            }
        }

        int detmat() {
            Matrix q(maxrow - 1, maxcol - 1);
            int sign = 1, sum = 0, i, j, k, count;
            int newpos, pos, order;

            order = maxrow;
            if(order == 1)
                return (ptr[0]);
            
            for(i = 0; i < order; i++, sign *= -1){
                for(j = 1; j < order; j++) {
                    for (k = 0, count = 0; k < order; k++)
                    {
                        if(k == i) 
                            continue;
                        pos = j * order + k;
                        newpos = (j - 1) * (order - 1) + count;
                        q.ptr[newpos] = ptr[pos];
                        count++;
                    }
                }
                sum = sum + ptr[i] * sign * q.detmat();
            }
            return sum;
        }

        Matrix operator + (Matrix b) {
            Matrix c(maxrow, maxcol);
            int i, j, mat_off;
            for (i = 0; i < maxrow; i++) {
                for(j = 0; j < maxcol; j++) {
                    mat_off = i * maxcol + j;
                    c.ptr[mat_off] = ptr[mat_off] + b.ptr[mat_off];
                }
            }
            return c;
        }

        Matrix operator * (Matrix b) {
           Matrix c(b.maxcol, maxrow);
           int i, j,k, mat_off1, mat_off2, mat_off3;

           for(i = 0; i < c.maxrow; i++) {
                for(j = 0; j < c.maxcol; j++) {
                    mat_off3 = i * c.maxcol + j;
                    c.ptr[mat_off3] = 0;
                    for (k = 0; k < b.maxrow; k++) {
                        mat_off2 = k * b.maxcol + j;
                        mat_off1 = i * maxcol + k;
                        c.ptr[mat_off3] += ptr[mat_off1] * b.ptr[mat_off2];

                    }
                }
           }
           return c;
        }

        int operator == (Matrix b) {
            int i, j, mat_off;
            if(maxrow != b.maxrow || maxcol != b.maxcol) 
                return 0;
            for (i = 0; i < maxrow; i++) {
                for( j = 0 ; j < maxcol; j++) {
                    mat_off = i * maxcol + j;
                    if(ptr[mat_off] != b.ptr[mat_off]) 
                        return 0;
                }
            }
            return 1;
        }
};

int main() {
    int rowa, cola, rowb, colb;
    cout << "Enter the dimensions of matrix A" << endl;
    cin >> rowa >> cola;
    Matrix a(rowa, cola);
    a.getmat();
    cout << "Enter the dimensions of matrix B" << endl;
    cin >> rowb >> colb;
    Matrix b(rowb, colb);
    b.getmat();
    Matrix c(rowa, colb);
    c = a + b;
    cout << "Sum of matrices is" << endl;
    c.printmat();

    Matrix d(rowa, colb);
    d = a * b;
    cout << "Product of matrices is" << endl;
    d.printmat();

    cout << "Determinant of matrix A is" << endl;
    if( a == b) {
        cout << "Matrices are equal" << endl;
    } else {
        cout << "Matrices are not equal" << endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

class Complex {
    int real, imag;
    public:
        Complex(int r = 0, int i = 0) {
            real = r;
            imag = i;
        }
        Complex operator + (Complex &obj) {
            Complex res;
            res.real = real + obj.real;
            res.imag = imag + obj.imag;
            return res;
        }
        friend Complex operator + (int x, Complex &obj);

        Complex operator - (Complex &obj) {
            Complex res;
            res.real = real - obj.real;
            res.imag = imag - obj.imag;
            return res;
        }

        friend Complex operator - (int x, Complex &obj);

        Complex operator * (Complex &obj) {
            Complex res;
            res.real = real * obj.real;
            res.imag = imag * obj.imag;
            return res;
        }

        friend Complex operator * (int x, Complex &obj);

        void print() {
            cout << real << " + i" << imag << endl;
        }
};

Complex operator + (int x, Complex &obj) {
            Complex res;
            res.real = x + obj.real;
            res.imag = x + obj.imag;
            return res;
}

Complex operator - (int x, Complex &obj) {
            Complex res;
            res.real = x - obj.real;
            res.imag = x - obj.imag;
            return res;
}

Complex operator * (int x, Complex &obj) {
            Complex res;
            res.real = x * obj.real;
            res.imag = x * obj.imag;
            return res;
}

int main() {
    Complex c1(10, 5), c2(2, 4);
    Complex c3 = c1 + c2;
    c3.print();

    Complex c4 = c1 - c2;
    c4.print();

    Complex c5 = c1 * c2;
    c5.print();

    Complex c6 = 5 + c1;
    c6.print();

    Complex c7 = 5 - c1;
    c7.print();

    Complex c8 = 5 * c1;
    c8.print();

}
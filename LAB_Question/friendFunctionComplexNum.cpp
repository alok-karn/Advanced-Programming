#include<bits/stdc++.h>
using namespace std;
class Complex2;
class Complex1 {
    public:
    int real;
    int img;
    public:
    Complex1(int real, int img) {
        this->real = real;
        this->img = img;
    }
    void showContent() {
        cout << "Real- " << real << endl;
        cout << "Img- " << img << endl;
    }
    friend void addComplex(&Complex1, &Complex2); // friend function
};

class Complex2 {
    public:
    int real; 
    int img;
    public:
    Complex2(int real, int img) {
        this->real = real;
        this->img = img;
    }
    void showContent() {
        cout << "Real- " << real << endl;
        cout << "Img- " << img << endl;
    }
    friend void addComplex(&Complex1, &Complex2);
};

void addComplex(Complex1 c1, Complex2 c2) {
    int real = c1.real + c2.real;
    int img = c1.img + c2.img;
    cout << "Real- " << real << endl;
    cout << "Img- " << img << endl;
}

int main() {
    Complex1 c1(2, 3);
    Complex2 c2(4, 5);
    
    addComplex(c1, c2);
    c1.showContent();
    c2.showContent();
    return 0;
}
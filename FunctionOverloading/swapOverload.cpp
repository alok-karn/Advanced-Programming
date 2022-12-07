#include<bits/stdc++.h>
using namespace std;

void Swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void Swap(char &a, char &b)
{
    char temp = a;
    a = b;
    b = temp;
}

void Swap(float &a, float &b)
{
    float temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 10, b = 20;
    Swap(a, b);
    cout << "a = " << a << " b = " << b << endl;

    char c = 'A', d = 'B';
    Swap(c, d);
    cout << "c = " << c << " d = " << d << endl;

    float e = 10.5, f = 20.5;
    Swap(e, f);
    cout << "e = " << e << " f = " << f << endl;

    return 0;
}

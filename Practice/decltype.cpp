#include<bits/stdc++.h>
using namespace std;

int func1() { return 10; }
char func2() { return 'g'; }

int main() {
    decltype(func1()) x = 10;
    decltype(func2()) y = 'g';

    cout << typeid(x).name() << endl
         << typeid(y).name() << endl;

    cout << typeid(decltype(func1())).name() << endl;


    int a = 5;

    decltype(a) j = a + 5;
    cout << typeid(j).name();
    return 0;
}

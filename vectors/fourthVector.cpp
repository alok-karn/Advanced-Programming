#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> g1;

    for(int i = 1; i <= 10; i++)
        g1.push_back(i * 10);
    
    cout << "Reference operator [g] : g1[2] = " << g1[0] << endl;
    cout << "at : g1.at(4) = " << g1.at(4) << endl;
    cout << "front() : g1.front() = " << g1.front() << endl;
    cout << "back() : g1.back() = " << g1.back() << endl;

    // pointer to the first element

    int *pos = g1.data();

    cout << "The first element is " << *pos << endl;
    return 0;

}
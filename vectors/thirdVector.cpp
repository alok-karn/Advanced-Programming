#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> g1;

    for (int i = 1; i <=5; i++)
        g1.push_back(i);

    cout << "Size : " << g1.size() << endl;
    cout << "Capacity : " << g1.capacity() << endl;
    cout << "Max_Size : " << g1.max_size() << endl;

    // resizes the vector size to 4

    g1.resize(4);

    // prints the vector size after resize()

    cout << "Size : " << g1.size() << endl;

    // checks if the vector is empty or not
    if(g1.empty() == false) 
        cout << "Vector is not empty" << endl;
    else
        cout << "Vector is empty" << endl;
    
    //shrinks the vector

    g1.shrink_to_fit();

    cout << "Vector elements are: ";
    for (auto it = g1.begin(); it != g1.end(); it++) 
        cout << *it << " ";
    return 0;
}
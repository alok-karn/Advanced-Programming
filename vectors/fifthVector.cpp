#include<bits/stdc++.h>
using namespace std;

int main() {
    //assing vector

    vector<int> v;

    //fill the array with 10 five times

    v.assign(5, 10);

    cout << "The vector elements are: ";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    
    //insert 15 to the last position

    v.push_back(15);

    int n = v.size();
    cout << endl;
    cout << "The last element is: " << v[n - 1] << endl;

    // removes last element:

    v.pop_back();

    //prints the vector

    cout << "The vector elements are: " << endl;
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";


    //inserts 5 at the beginning

    v.insert(v.begin(), 5);

    cout << "The first element is: " << v[0] << endl;

    //removes the first element

    v.erase(v.begin());

    cout << "The first element is: " << v[0] << endl;

    //inserts at the beginning

    v.emplace(v.begin(), 5);
    cout << "The first element is: " << v[0] << endl;


    // Inserts 20 at the end
    v.emplace_back(20);
    n = v.size();

    cout << "The last element is: " << v[n - 1] << endl;

    // erases the vector
    v.clear();
    cout << "Vector size after erase(): " << v.size() << endl;

    // two vector to perform swap

    vector<int> v1, v2;
    v1.push_back(1);
    v1.push_back(2);
    v2.push_back(3);
    v2.push_back(4);

    cout << "Vector 1: " << endl;
    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << " ";

    cout << endl << "Vector 2: " << endl;
    for (int i = 0; i < v2.size(); i++)
        cout << v2[i] << " ";
    cout << endl;

    // Swaps v1 and v2
    v1.swap(v2);

    cout << "After Swap Vector 1: " << endl;
    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << " ";
    cout << endl;
    cout << "Vector 2: " << endl;
    for (int i = 0; i < v2.size(); i++)
        cout << v2[i] << " ";
    return 0;
}
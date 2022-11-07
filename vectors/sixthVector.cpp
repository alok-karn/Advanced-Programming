#include<bits/stdc++.h>
using namespace std;

int main() {

    vector<int> v;

    v.assign(5, 10);

    cout << "The vector elements are: " << endl;

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " " << endl;
    }

    //inserts some value to the last position

    v.push_back(20);

    int n = v.size();
    cout << "The last element is: " << v[n - 1] << endl;

    //removing the last element

    v.pop_back();

    //prints the vector

    cout << "The vector elements are: " << endl;

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " " << endl;
    }

    //inserting element at the beginning

    v.insert(v.begin(), 15);

    cout << "The first element is: " << v[0] << endl;

    //removes the first element

    v.erase(v.begin());

    cout << "The first element is: " << v[0] << endl;


    //inserting at the beginning

    v.emplace(v.begin(), 5);
    cout << "The first element is: " << v[0] << endl;


    //Inserts 20 at the end

    v.emplace_back(20);
    n = v.size();
    cout << "The last element is: " << v[n - 1] << endl;

    //erasing the vector

    v.clear();

    cout << "Vector size after erase(): " << v.size() << endl;
    
}
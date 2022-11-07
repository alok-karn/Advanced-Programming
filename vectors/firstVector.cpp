#include<bits/stdc++.h>
using namespace std::chrono;
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    auto start = high_resolution_clock::now();
    
    cout << v[0] << endl;
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Time taken by function: " << duration.count() << " microseconds" << endl;
    return 0;
}
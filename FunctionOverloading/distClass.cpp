#include<bits/stdc++.h>
using namespace std;

class Distance {
    public:
        int feet;
        int inches;
        Distance() {
            feet = 0;
            inches = 0;
        }
        Distance(int f, int i) {
            feet = f;
            inches = i;
        }
        Distance addDist(Distance d1, Distance d2) {
            Distance temp;
            temp.feet = d1.feet + d2.feet;
            temp.inches = d1.inches + d2.inches;
            return temp;
        } 
        Distance addDist(Distance d1) {
            Distance temp;
            temp.feet = feet + d1.feet;
            temp.inches = inches + d1.inches;
            return temp;
        }
};

int main() {
    Distance d1(10, 5), d2(20, 10), d3, d4;
    d3 = d1.addDist(d1);
    cout << "d3.feet = " << d3.feet << " d3.inches = " << d3.inches << endl;
    d4 = d4.addDist(d1, d2);
    cout << "d4.feet = " << d4.feet << " d4.inches = " << d4.inches << endl;
    
    return 0;
}
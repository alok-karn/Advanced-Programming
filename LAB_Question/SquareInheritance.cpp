#include<bits/stdc++.h>
using namespace std;

class Square {
    public:
        int side;
        int peri() {
            return 4*side;
        }
        int findArea() {
            return pow(side, 2);
        }
        ~Square() {
            cout << "tada! parent destrcutor is called " << endl;
        }
};

class Cube : public Square {
    public:
        Cube(int len){ side = len; }
        
        int surfaceArea() {
            return 6 * findArea();
        }
        int periCube() {
            return 3 * peri();
        }
        ~Cube() {
            cout << "tada! child destrcutor is called " << endl;

        }
};

int main() {
    Cube c1(4);
    cout << "The surface area of the cube is: " << c1.surfaceArea() << endl;
    cout << "The perimeter of the cube is: " << c1.periCube() << endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define PI 3.14
class Circle {
    int radius;
    public:
    int getRad() {
        return this->radius;
    }
        Circle(int rad) {
            radius = rad;
        }
        ~Circle() {
            cout << "Tada!!! hello Desctructor " << endl;
        }
        int findPeri() {
            return 2 * PI * getRad();
        }
        int findArea() {
            return PI * pow(getRad(), 2);
        }
};

class Sphere : public Circle {
    public:
    Sphere(int R) : Circle(R){}
        int surfaceArea() {
            return 2 * getRad() * findPeri();
        }int volume() {
            int vol = (4/3) * getRad() * findArea();
            return vol;
        }

        
};
int main() {
    Sphere S(5);
    cout << "The surface Area is: " << S.surfaceArea() << endl;
    cout << "The volume of sphere is: " << S.volume() << endl;
    return 0;


}
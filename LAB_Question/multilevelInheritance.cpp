#include<bits/stdc++.h>
using namespace std;

class Vehicle {
    string type;
    public:
        void readVehicle() {
            cout << "Enter type" << endl;
            cin >> type;
        }
        void dispVehicle() {
            cout << "Type: " << type << endl;
        }
};

class Car : public Vehicle {
    protected:
    string ManufacturerName;
    public:
        void readCar() {
            readVehicle();
            cout << "Enter Manufacturer Name" << endl;
            cin >> ManufacturerName;
        }
        void dispCar() {
            dispVehicle();
            cout << "Manufacturer Name: " << ManufacturerName << endl;
        }
};

class Maruti : public Car {
    public:
        string brandName;
        void readMaruti() {
            readCar();
            cout << "Enter brand name" << endl;
            cin >> brandName;
        }
        void dispMaruti() {
            dispCar();
            cout << "Brand Name: " << brandName << endl;
        }
};

int main() {
    Maruti m;
    m.readMaruti();
    m.dispMaruti();
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

class Time {
    int hours, minutes, seconds;
    public:
        Time(int h = 0, int m = 0, int s = 0) {
            hours = h;
            minutes = m;
            seconds = s;
        }
    friend istream & operator >> (istream &in, Time &obj);
    friend ostream & operator << (ostream &out, Time &obj);

    Time operator -- () {
        --hours;
        --minutes;
        --seconds;
        return *this;
    }

    Time operator ++ (int) {
        Time temp;
        temp.hours = ++hours;
        temp.minutes = ++minutes;
        temp.seconds = ++seconds;
        return temp;
    }
};

istream & operator >> (istream &in, Time &obj) {
    cout << "Enter hours: ";
    in >> obj.hours;
    cout << "Enter minutes: ";
    in >> obj.minutes;
    cout << "Enter seconds: ";
    in >> obj.seconds;
    return in;
}

ostream & operator << (ostream &out, Time &obj) {
    out << "Time is: " << obj.hours << ":" << obj.minutes << ":" << obj.seconds << endl;
    return out;
}

int main() {
    Time t1;
    cin >> t1;
    cout << t1;
    --t1;
    cout << t1;
    t1++;
    cout << t1;
    return 0;
}

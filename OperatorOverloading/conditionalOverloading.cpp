#include<bits/stdc++.h>
using namespace std;

class Group {
    public:
        string str;
        Group(string s) {
            str = s;
        }
        
        bool operator > (Group &obj) {
            int check = str.compare(obj.str);
            if (check > 0) {
                return true;
            } else {
                return false;
            }
        }
        
        bool operator == (Group &obj) {
            int check = str.compare(obj.str);
            if( check == 0) {
                return true;
            }else {
                return false;
            }
        }
};

int main() {
    Group g1("abc");
    Group g2("cba");
    if (g1 > g2) {
        cout << "g1 is greater than g2" << endl;
    } else if (g1 == g2){
        cout << "g2 is equal g1" << endl;
    } else {
        cout << " g2 is greater than g1 " << endl;
    }
    return 0;
}
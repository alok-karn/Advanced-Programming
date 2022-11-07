#include<bits/stdc++.h>
using namespace std;

int main() {
    auto x = 'a';
    auto y = 3.12;
    auto ptr = &x;

    cout << typeid(x).name() << endl
         << typeid(y).name() << endl
         << typeid(ptr).name() << endl;

    set<string> st;
    st.insert({"geeks",
               "for",
               "geeks",
               "org"});

    for (auto it = st.begin(); it != st.end(); it++)
        cout << *it << " ";
        return 0;
}
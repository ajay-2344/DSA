#include<bits/stdc++.h>
using namespace std;

int main() {
    int a = 10; // Data Variable

    int &r = a; // Reference variable // It must be initialized while declaration // Can say that `r` is just another name of `a`

    cout<< "---Address of both `a` and `r`---" << endl;
    cout<< &a << endl;
    cout<< &r<< endl;

    cout<< "---Before---" << endl;
    cout<< a << endl; // 10

    cout<< "---Incremenmt value of `r`---" << endl;
    cout<< ++r << endl; // 11
    
    cout<< "---After---" << endl;
    cout<< a << endl; // 11
}


// Call by reference. Eg: Area of rectangle
// int area(int &l, int &b) {
//     l = 20;
//     b = 30;
//     return l * b;
// }


// int main() {
//     int length = 10;
//     int breadth = 20;

//     cout << "Before: ";
//     cout<< length << endl;
//     cout<< breadth << endl;

//     int result = area(length, breadth);

//     cout<< "After: ";
//     cout<< length << endl;
//     cout<< breadth << endl;

//     cout << result;

//     return 0;
// }
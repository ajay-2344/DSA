#include<bits/stdc++.h>
using namespace std;

struct Rectangle {
    int length;
    int breadth;
};

// Call by address
void initializeStruct(struct Rectangle *r, int l, int b) {
    r -> length = l;
    r -> breadth = b;
}

// Call by value
int area(struct Rectangle r) {
    return (r.length * r.breadth);
}

// Call by reference
void changeLength(struct Rectangle &r, int l) {
    r.length = l;
}


int main() {
    struct Rectangle r;

    initializeStruct(&r, 10, 5);
    cout<< area(r) << endl;
    changeLength(r, 20);

    return 0;
}

// This is the highest level of programming style in C since there is no concept of classes (OOPS)
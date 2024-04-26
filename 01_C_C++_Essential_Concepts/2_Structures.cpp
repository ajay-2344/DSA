// Struct is a `User-Defined data type`
// Collection of data members under one name is structure (Grouping data)

#include<bits/stdc++.h>
using namespace std;

// It doesn't consume memory until it has been declared
struct Rectangle {
    // Data memebers can be of any data type
    // Data members here can be initialized in `C++` but not in `C`
    string name;
    int length = 0;
    int breadth = 0;
}r, s; // We can write multiple variable names here so we dont have to declare it separately

struct Card {
    int face;
    int shape;
    int color;
};

// We can declare it outside the main function as well
// struct Rectangle r; // struct Rectangle has now been declared and is consuming memory
// struct rectangle s;
// struct rectangle t;

int main()
{
    // struct Rectangle r; // `struct Rectangle` has now been declared and is consuming memory
    // Rectangle s; // In C++ writing `struct` is not mandatory to declare a structure.
    // struct Rectangle t;

    // Initialization using Initializer List
    // struct Rectangle r = {"Kiku", 15, 10};
    // struct Rectangle s = {"Ajay", 10, 5};
    // struct Rectangle s = {"Shinu", 5, 5};

    // Initialization using Assignment Operator
    // We use `dot` operator followed by data memeber's variable name to access data members
    r.name = "Kiku";
    r.length = 15;
    r.breadth = 10;

    s.name = "Ajay";
    s.length = 10;
    s.breadth = 5;

    // Initialization using Designated Initializer List
    struct Rectangle t = {.name = "Shinu", .length = 5, .breadth = 5};

    cout<< "Name: " << r.name << endl;
    cout<< "Area: " << r.length * r.breadth << endl;

    cout<< "-------" << endl;

    cout<< "Name: " << s.name << endl;
    cout<< "Area: " << s.length * s.breadth << endl;

    cout<< "-------" << endl;

    cout<< "Name: " << t.name << endl;
    cout<< "Area: " << t.length * t.breadth << endl;

    cout<< "-------" << endl;

    // Cards Struct
    // Array of structures
    struct Card deck[4] = {{1, 0, 0}, {2, 0, 0}, {1, 1, 0}, {2, 1, 0}};

    for(int i =0; i < sizeof(deck)/sizeof(deck[0]); i++) {
        cout<< "Card no. " << i + 1 << endl;
        cout<< "Face: " << deck[i].face << endl << "\nShape: " << deck[i].shape << "\nColor: " << deck[i].color << endl << endl;
    }

    return 0;
}
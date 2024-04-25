#include<bits/stdc++.h>
using namespace std;

/* Scope Resolution Operator: https://www.geeksforgeeks.org/scope-resolution-operator-in-c/
    1) To access a global variable when there is a local variable with same name
    2) To define a function outside a class
    3) To access a class’s static variables
    and more...
*/

class Rectangle {
    private:
        int length;
        int breadth;

    public:
        // Default Construtor
        Rectangle() {
            length = 1;
            breadth = 1;
        }
        // Constructor Overloading (Parameterized Constructor)
        Rectangle(int l, int b);

        int area();

        int perimeter();

        void setLength(int l);

        int getLength() {
            return length;
        }
        // Destructor
        ~Rectangle();
};

// Defining function outside the class using Scope Resolution Operator `::`
// Parameterized Constructor of Class Rectangle
Rectangle :: Rectangle(int l, int b) {
    length = l;
    breadth = b;
}

// Member Functions of Class Rectangle
int Rectangle :: area() {
    return length * breadth;
}

int Rectangle :: perimeter() {
    return (2 * (length + breadth));
}

void Rectangle :: setLength(int l) {
    length = l;
}

// Destructor of Class Rectangle
Rectangle :: ~Rectangle() {
    cout<< "Destructed";
}

int main()
{
    Rectangle r(10, 5);

    cout<< r.area() << endl; // 50

    cout<< r.perimeter() << endl; // 30

    r.setLength(20);

    cout<< r.getLength() << endl; // 20

    // Destructed // Default function called with tilde sign
    return 0;
}
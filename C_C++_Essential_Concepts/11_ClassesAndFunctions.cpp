#include<bits/stdc++.h>
using namespace std;


/* Access Modifiers: Private | Public | Protected
    // Private: The class members declared as private can be accessed only by the member functions inside the class.

    // Public: All the class members declared under the public specifier will be available to everyone
                and can be accessed anywhere throughout the program.

    // Protected: The protected access modifier is similar to the private access modifier in the sense that
                it can’t be accessed outside of its class unless with the help of a friend class (Inherited from base class).

If no access modifier is mentioned, it takes the default modifier that is `private`
*/

class Rectangle {
    private:
        int length = 10;
        int breadth = 20;

    public:
        // Constructor: It is a method that is automatically executed every time an object is created
        Rectangle (int l, int b) {
            length = l;
            breadth = b;
        }

        int area() {
            return length * breadth;
        }

        void changeLength(int l) {
            length = l;
        }
};

int main()
{
    // Creating object `r` of class `Rectangle`
    Rectangle r(10, 5); // Constructor Rectangle is automatically executed. Here we are initializing values of length and breadth

    cout<< r.area() << endl;
    r.changeLength(20);
    cout<< r.area() << endl;

    return 0;
}
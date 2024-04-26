#include<bits/stdc++.h>
using namespace std;

// Template class allows us to pass `Data Types` as parameter. It helps to avoid writing multiple codes for different types of data.
// Template class with default data types
template <class T = int, class U = int>
class Arithmetic {
    private:
        T a;
        U b;

    public:
        Arithmetic(T a, T b);

        T add();
};

template <class T, class U>
Arithmetic<T, U> :: Arithmetic(T a, T b) {

    // With the help of `this` keyword we can refer to the class's data members
    this -> a = a;
    this -> b = b;
}

template <class T, class U>
T Arithmetic<T, U> :: add() {
    return a + b;
}

int main()
{
    // Creating an object without passing `Data Types`. This will assume the default data types of class T and U which is `int`
    Arithmetic a(34, 35);
    cout<< a.add() << endl;

    // Creating object by passing `Data Types`. This will overwrite the default data types of class T and U.
    Arithmetic<float, float> b(33.7, 12.691);
    cout<< b.add() << endl;

    // Creating object by passing different `Data Types`. This will overwrite the default data types of class T and U.
    Arithmetic<float, char> c(33.7, 'a');
    cout<< c.add() << endl;

    return 0;
}
#include<bits/stdc++.h>
using namespace std;


// Part 1
struct Rectangle {
    int length;
    int breadth;
};

// Call by value
int area(struct Rectangle r2) {
    r2.length = 40;
    r2.breadth = 30;
    return (r2.length * r2.breadth);
}

// Call by reference
int transfer1(struct Rectangle &r1) {
    r1.length = 30;
    r1.breadth = 30;
    return area(r1);
}

// Call by address
int transfer2(struct Rectangle *r3) {
    r3 -> length = 20;
    r3 -> breadth = 30;
    return transfer1(*r3);
}


// Part 2
struct TestArray {
    int arr[5];
    int n;
};

// Testing Array in structure: Call by value
void testArrayFunc(struct TestArray b, int size) {

    // Assigning values in the array `b.arr[]`. This wont affect the source of struct array as this function is `Call by value`
    for(int i = 0; i < size; i++) {
        b.arr[i] = i + 10;
    }

    // Checking the values in the array `b.arr[]`
    for(int i = 0; i < size; i++) {
        cout<< b.arr[i] << " "; // [10, 11, 12, 13, 14]
    }

}


// Part 3
// Allocating memory for structure in heap
struct Rectangle * allocateHeap(int size) {

    struct Rectangle *h_p;

    // C++ Style memory allocation
    h_p = new struct Rectangle[size];

    // C Style memory allocation
    // h_p = (struct Rectangle *)malloc(sizeof(size));

    // Assigning some values to the data members of structure which lies in heap memory
    h_p -> length = 45;
    h_p -> breadth = 35;

    return h_p;
}


int main()
{
    // ------------------------------------------------------------Part 1-----------------------------------------------------------------------------
    cout<< "--------" << endl;

    struct Rectangle r = {10, 5};

    cout<< transfer2(&r) << endl; // 1200
    cout<< r.length << " " << r.breadth << endl; // 30 30

    // -------------------------------------------------------------Part 2----------------------------------------------------------------------------
    cout<< "--------" << endl;
    
    
    // Testing if a sctructure can be passed as Call by value if there's an array in it
    struct TestArray a = {{1, 2, 3, 4, 5}, 10};

    // Getting the number of elements in the array
    int size = sizeof(a.arr)/sizeof(a.arr[0]);

    // Passing structure `a` and `size` as Pass by value
    testArrayFunc(a, size);

    cout << endl;

    // Checking if the value in the array `a.arr[]` has changed or not
    for (int i = 0; i < size; i++)
    {
        cout<< a.arr[i] << " "; // [1, 2, 3, 4, 5] // Not changed. Clearly a copy of the structure is created even if it contains array in it.
    }
    
    cout << endl;

    // --------------------------------------------------------------Part 3---------------------------------------------------------------------------
    cout<< "--------" << endl;


    // Allocating memory in heap
    struct Rectangle *p; // Declaring pointer to structure

    size = sizeof(struct Rectangle); // Getting the size of `struct Rectangle`

    // Getting the address of the allocated memory in heap
    p = allocateHeap(size);

    // Displaying output
    cout<< (p -> length * p -> breadth);


    // Freeing allocated memory because I am a mature responsible programmer
    delete []p;

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

struct Rectangle {
    int length;
    int breadth;
}*p, *r;

int main()
{
    // Structure to pointer declaration
    // struct Rectangle *p;
    // struct Rectangle *r;

    // Allocate memory in heap
    p = (struct Rectangle *)malloc(sizeof(struct Rectangle)); // It returns an address or pointer of type `struct Rectangle`
    struct Rectangle *r = p; // Storing address of `p` in pointer `r` of type `struct Rectangle`

    // Size of p is 8 bytes
    cout<<sizeof(p) << endl;

    p -> length = 10; // or (*p).length = 10;
    p -> breadth = 5; // or (*p).breadth = 5;

    r -> length = 15; // or (*r).length = 10;
    r -> breadth = 20; // or (*r).breadth = 5;

    cout<< r -> length << endl; // (*r).length
    cout<< p -> breadth << endl; // (*p).breadth


    // Clearing allocated memory from heap to avoid Memory Leak
    delete []p;
    delete []r;

    return 0;
}
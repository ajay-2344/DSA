#include<bits/stdc++.h>

// To use malloc we include 
// #include<stdlib.h>

using namespace std;


// Pointer is an address variable that is used to store address
// Used to indirectly access the data
// Main memory is divided into 3 parts: On top we have `Stack` then we have `Heap` and lastly we have `Code`
// Code section of memory can directly access Stack memory but can't access heap memory
// Therefore to access heap memory we use `Pointers`
// Major use of pointer is: Accessing resources
// Used for parameter passing as well

int main()
{
    // Data variable
    int a = 10;

    // Address variable(Pointer) // Size of pointer is 8 Bytes regardless the data type
    int *p;

    // Initialize pointer
    p = &a; // This `p` pointer is in stack memory and is pointing to `a` // Address of `a` is stored

    // Displaying result
    cout<< "a: " << a << endl; // Direct access
    cout<< "p -> a: " << *p << endl; // Dereferencing

    // Malloc
    // To allocate memory in heap we use `malloc' function
    int *n;
    
    /* C style declaration 
            Return type        Size
        n = (int *)malloc(5 * sizeof(int)); 
        n pointer is in stack memory and points to the reserved space in heap memory
        This line will reserve some space in the Heap memory [0, 1, 2, 3, 4] 
    */

    // C++ style declaration
    n = new int[5];

    cout<< "--------" << endl;

    // Array of pointers
    int arr[5] = {3, 2, 1, 4, 5}; // This is created in stack

    // Declaring pointer
    int *a_p;

    // Storing address of the array 
    a_p = arr; // We dont have to use `&` symbol to get the address because `arr` variable already contains the address of first element of the array
    /* We can add any number in `a_p` to store the address of another element but the number should be in the array's range 
        Eg: a_p = arr + 1; 
        This will store the address of second element of the array 
    */

    /* Other way to store address of `arr` array
        a_p = &arr[0];
        Storing the address of first element of the array `arr`
    */

    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        // We dont have to dereference as `a_p` pointer is itself a name variable for `arr` in case of arrays
        cout<< a_p[i] << endl;
    }

    cout<< "--------" << endl;

    // Using malloc
    int *h_p;
    // C style memory allocation
    // h_p = (int *)malloc(5 * sizeof(int)); // This occupies memory in heap

    // C++ style memory allocation
    h_p = new int[5];

    h_p[0] = 1;
    h_p[1] = 2;
    h_p[2] = 3;
    h_p[3] = 4;
    h_p[4] = 5;

    for(int i = 0; i < 5; i++)
    {
        cout<< h_p[i] << endl;
    }

    // Releasing heap memory (C Style) to avoid Memory Leak
    // free(h_p);
    // free(n);

    // Releasing heap memory (C++ Style) to avoid Memory Leak
    delete []h_p;
    delete []n;

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

// Arrays can never be passed as value. It can only be passed as address.
// In function if we want to pass an array, we write as `<data type> <array_name>[]`. It acts as an empty pointer.
// Using this method we constrict the usage of this pointer for arrays only.
// However we can pass an array using default pointer like `<data type> *<pointer name>. This can be used for any type of values including arrays.
void displayArray(int A[], int n) {

    cout<< sizeof(A) << endl; // 8 // This proves that A is a pointer and not an array

    cout<< endl;

    for (int i = 0; i < n; i++)
    {
        cout<< A[i] << endl;
    }
    
}


// Returning a pointer to an array
// We can also write `int [] allocateArray(int n)`. Here [] bracket assures that pointer to an array is returned. However some compilers don't allow this.
int * allocateArray(int n) {
    
    int *h_p;
    // Allocate memory in heap (C style)
    // h_p = (int *)malloc(n * (sizeof(int)));

    // Allocate memory in heap (C++ style)
    h_p = new int[5];

    for (int i = 0; i < n; i++)
    {
        h_p[i] = i + 1;
    }

    // Returning address of first element of the array allocated in heap
    return h_p;
}

int main()
{
    
    int arr[5] = {1, 2, 3, 4, 5};

    // Here `arr` is passed as an address.
    displayArray(arr, 5);

    // 
    cout<< "---------" << endl;

    // Returning a pointer to an array
    int *p;
    int size = 5;
    p = allocateArray(size); // Stores the address returned by `h_p`

    // Displaying values in array
    for(int i = 0; i < size; i++) {
        cout<< p[i] << endl;
    }

    // Freeing allocated memory
    delete []p;

    return 0;
}
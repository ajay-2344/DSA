#include<bits/stdc++.h>
using namespace std;

// Call by value
void swap_call_by_value(int a, int b) {

    // Swap using 3rd variable
    int temp;

    temp = a;
    a = b;
    b = temp;

    // Swap without using a 3rd variable
    b = a + b;
    a = b - a;
    b = b - a;
}

// Call by address
void swap_call_by_address(int *a, int *b) {
    
    // Swap using 3rd variable
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;

    // Swap without using a 3rd variable
    // *b = *a + *b;
    // *a = *b - *a;
    // *b = *b - *a;
}

// Call by reference (Only in C++)
// It is not advised to use Call by reference in large programs as it copy pastes the function in main so it basically becomes a monolithic program
void swap_call_by_reference(int &a, int &b) {

    // Swap using 3rd variable
    int temp;

    temp = a;
    a = b;
    b = temp;
    
    // Swap without using a 3rd variable
    // b = (a + b);
    // a = b - a;
    // b = b - a;

}

int main()
{
    
    int x = 37, y = 19;

    swap_call_by_value(x, y);
    cout<< "x: " << x << " " << "y: " << y << endl;

    swap_call_by_address(&x, &y);
    cout<< "x: " << x << " " << "y: " << y << endl;

    x = 37;
    y = 19;
    swap_call_by_reference(x, y);
    cout<< "x: " << x << " " << "y: " << y << endl;

    return 0;
}
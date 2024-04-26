#include<bits/stdc++.h>
using namespace std;

// Writing all instructions into one single function is called Monolithic programming
// Writing instructions into numerous functions is called Modular/Procedural programming


// Call by value (Values are copied from the source)
// Its data is deleted from the memory after its execution ends
//      Formal Paramenters
int add(int a, int b) {
    int c = a + b;
    return c;
}

int main()
{
    
    int x = 10, y = 20, z = 0;

    // Function called with actual parameters `x` and `y` and the return output is stored in `z`
    z = add(x, y);

    cout<< z << endl;
    return 0;
}
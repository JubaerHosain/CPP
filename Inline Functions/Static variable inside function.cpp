#include <iostream>
using namespace std;

// same for inline function 

int product(int a, int b) {
    // initialized only first time call
    static int c = 0;
    c = c + 2;
    return a*b + c;
}

int main() {
    cout << product(2, 3) << endl;
    cout << product(2, 3) << endl;
    cout << product(2, 3) << endl;
    cout << product(2, 3) << endl;
    cout << product(2, 3) << endl;
    cout << product(2, 3) << endl;
    cout << product(2, 3) << endl;
    cout << product(2, 3) << endl;
    cout << product(2, 3) << endl;
    cout << product(2, 3) << endl;
    cout << product(2, 3) << endl;
    cout << product(2, 3) << endl;
    cout << product(2, 3) << endl;
   
    return 0;
}

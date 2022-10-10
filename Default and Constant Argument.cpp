#include <iostream>
using namespace std;

// default argument b
// all default argument should on the right side
int get(int a, int b = 5) {
    return a*b;
}

int get1(int a, const int &b) {
    // b should not be changed inside this function
    // why const is useful with refference variable? bcz without refference, change couldn't afftect the actual variable in caller function.
    return a + b;
}

int main() {
    cout << get(5) << endl;
    cout << get(5, 6) << endl;
    
    cout << get1(2, 44);
    
    
   
    return 0;
}

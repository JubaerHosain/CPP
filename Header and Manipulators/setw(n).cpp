#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << "Hello World" << endl; 
   
    int a = 1, b = 12, c = 123;
    cout << "value: " << a << endl;
    cout << "value: " << b << endl;
    cout << "value: " << c << endl;
   
    cout << "value: " << setw(10) << a << endl;
    cout << "value: " << setw(10) << b << endl;
    cout << "value: " << setw(10) << c << endl;
   
    return 0;
}

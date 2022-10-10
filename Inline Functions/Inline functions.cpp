#include <iostream>
using namespace std;

inline int product(int a, int b) {
    return a*b;
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

//This can become overhead if the execution time of function is less than the switching time from the caller function to called function (callee).
//Caller function callded function k call korar jonno j time dorkar tar cheye o kom somoy lage called function ta execute hoite sesob small function er ketre inline use kora hoy.

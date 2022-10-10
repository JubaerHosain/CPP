#include <iostream>
#include <cstdarg>
using namespace std;

double average(int num,...) {
   va_list values;
   double sum = 0.0;
   
   va_start(values, num);           //initialize values for num number of arguments
   for(int i = 0; i < num; i++) {   //access all the arguments assigned to values
      sum += va_arg(values, int);
   }
   va_end(valist);                   //clean memory reserved for valist
   
   return sum/num;
}

int main() {
   cout << "Average of 2, 3, 4, 5 = "<< average(4, 2,3,4,5) << endl;
   cout << "Average of 5, 10, 15 = "<< average(3, 5,10,15)<< endl;
}

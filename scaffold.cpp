#include <iostream>
#include <cstdlib>
#include "mathfunc.h"
using namespace std;


int main(int argc, char *argv[]) {
    const string EXIT = "quit";
    string command;
    do {
      	cout << "calc: ";
        cin >> command;

        if ("help" == command)
        {
            // to do
	          cout << "help documentation" << endl;
        }
        else if (command == "math"){
          int num1;
          int num2;
          string op;
          cout << "Enter two numbers: ";
          cin >> num1 >> num2 ;
          cout << "Enter add, sub, mult, or div ";
          cin >> op;
          math_func(num1,num2,op);
        }
        else
        {
           // to do for start
	         cout << "unknown command" << endl;
	         return 1;
        }
    } while (EXIT != command);
    return 0;
}

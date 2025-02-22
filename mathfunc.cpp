#include <iostream>
#include <cstdlib>

using namespace std;


int mathfunc(int num1, int num2, string op) {
    const string ADD = "add";
    const string SUB = "sub";
    const string MULT = "mult";
    const string DIV = "div";

        if (op == ADD || op == SUB || op == MULT || op == DIV) {
          double num1, num2;
          cout << "Enter two numbers: ";
          cin >> num1 >> num2 ;
          if (op == ADD) {
            cout << "Result:" << num1+num2;
          }
          else if (op == SUB) {

            cout << "Result:" << num1-num2;
          }
          else if (op == MULT) {
            cout << "Result:" << num1*num2;
          }
          else if (op == DIV) {
            cout << "Result:" << num1/num2;
          }
       }
       else
       {
           // to do for start
	         cout << "unknown op" << endl;
	         return 1;
       }
        return 0;
}

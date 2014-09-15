/*
 Chapter 6. Design a calculator
 Author: Yuhang Wang
 Date: 2014-09-14
*/

//#include "cpp_std.h"
#include "mod_std_lib_facilities.h"

int main()
{
  cout << "Hello" << endl;
  cout << "Please enter an expression:";
  int lval = 0;
  int rval;
  char op;
  int result;
  cin >> lval>>op>>rval;
  if (op == '+')
    result = lval + rval;
  else if (op == '-')
    result = lval - rval;
  cout << "Result: "<< result <<'\n';
  keep_window_open();
}

#include "header.h"


int main()
{
  double num1;
  double num2;
  double result;
  
  string operation;
  string tempNum1;
  string tempNum2;

  cout <<  "Enter an operation: " ;
  cin >> operation ;
  cout <<  "Enter an single digit number: " ;
  cin  >> tempNum1 ;
  cout <<  "Enter an single digit number: " ;
  cin >> tempNum2;
  cout << endl;

  num1 = convert(tempNum1);
  num2 = convert(tempNum2);

  if (operation == "+") {
     result = add(num1, num2);
     cout << "The sum of " << num1 <<" and " << num2 <<" is: " << result << endl;
  }

  else if (operation == "-") {
     result = sub(num1, num2);
     cout << "The difference of " << num1 <<" and " << num2 <<" is: " << result << endl;
  }

  else if (operation == "*") {
     result = mul(num1, num2);
      cout << "The product of " << num1 <<" and " << num2 <<" is: " << result << endl;
  }
  else if (operation == "/") {
     result = div(num1, num2);
      cout << "The quotient of " << num1 <<" and " << num2 <<" is: " << result << endl;
  }

  return 0;
}


double add(double x, double y){
  return x + y;
}
double sub(double x, double y){
  return x-y;
}
double mul(double x, double y){
  return x*y;
}
double div(double x, double y){
  return x/y;
}

double convert(string n) {
  if (n == "1"  || n == "one" )
    return 1;

  if (n == "2"  || n == "two" )
    return 2;

  if (n == "3"  || n == "three" )
    return 3;

  if (n == "4"  || n == "four" )
    return 4;

  if (n == "1"  || n == "five" )
    return 5;

  if (n == "6"  || n == "six" )
    return 6;

  if (n == "7"  || n == "seven" )
    return 7;

  if (n == "9"  || n == "eight" )
    return 8;

  if (n == "9"  || n == "nine" )
    return 9;

  if (n == "0"  || n == "zero" )
    return 0;

}
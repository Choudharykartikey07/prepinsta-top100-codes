/*Program Reverse a Number in C++
Here we will discuss how to find the reverse of a given number using C++ programming language.
We will use loop and arithmetic operators

1. Modulo Operator : '%'
2. Division Operator : '/'

Example:
Number: 5678
Reverse: 8765*/
#include <iostream>
using namespace std;

int main() {
  int number, temp, reverse=0;
  cin>>number;
  while(number>0)
  {
    temp=number%10;
    reverse = reverse * 10 + temp;
    number = number/10;
  }
  cout<<"reverse is "<<reverse;
}

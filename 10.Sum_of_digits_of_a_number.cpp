/*Program to Find the Sum of Digits of a Number in C++
Here we will discuss how to find the sum of digits of a number in C++ programming language.

We will use loops along with two arithmetic operators:

1. Modulo Operator : '%'
2. Division Operator: '/'

Eg: number = 12345
Sum of digit of number = 1 + 2 + 3 + 4 + 5
Sum = 15*/

#include <iostream>
using namespace std;

int main() 
{
  int number,sum=0;
  cin>>number;
  while(number>0)
  {
     sum += number % 10;
    number = number/10;
  }
  cout<<"the sum of digits of given number is "<<sum;
  
  
}

/*Find the Greatest of the Two Numbers in C++
Given two integers as input, the objective is to check both numbers for the greatest and write a code to Find the Greatest of the Two Numbers in C++.

Example
Input : num1 = 23 , num2 = 43
Output : 43*/
#include <iostream>
using namespace std;

int main() {
  int number1,number2;
  cin>>number1>>number2;
  if(number1>number2)
    cout<<number1 <<" is greater";
  else if(number2>number1)
    cout<<number2<<" is greater";
  else
    cout<<"Numbers are equal";
}

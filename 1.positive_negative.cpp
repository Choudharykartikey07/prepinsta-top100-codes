/*Check if a Number is Positive or Negative in C++
Given an integer input, The objective is to write a code to Check if a Number is Positive or Negative in C++ Language.

For Instance,
Input : num = 10
Output :The number is Positive*/

#include <iostream>
using namespace std;

int main() {
  int number;  
  while(true)
  {
    cin>>number;
    if(number<0)
    {
      cout<<"The number is negative";  
    }
    else if(number>0)
    {
      cout<<"The number is positive";
    }
    else
    {
      cout<<"The number is zero";
    }
  }
  
}

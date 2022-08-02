/*Program to Check Whether a Year is a Leap Year or Not in C++
Given an integer input for a year, the objective is to write a Program to Check Whether a Year is a Leap Year or Not in C++ Language.

Example
Input : 2020
Output : 2020 is a Leap Year*/
#include <iostream>
using namespace std;

int main() {
  int year;
  cin>>year;
  if(year%400==0)
    cout<<"It is leap year";
  else if(year%4==0 && year%100!=0)
    cout<<"It is leap year";
  else
    cout<<"It is not leap year";
  
}

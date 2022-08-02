/*Find the Sum of N Natural Numbers in C++
Given an integer input the objective is to write a code to Find the Sum of N Natural Numbers in C++. To do so we simply keep adding the value of the iter variable using a for loop.

Example
Input : num = 8
Output : 36

Where first 8 number is 1, 2, 3, 4, 5, 6, 7, 8
Sum of numbers = 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 = 36*/


#include <iostream>
using namespace std;
int main() {
  int number;
  cin>>number;
  cout<<(number*(number+1))/2;
  
}

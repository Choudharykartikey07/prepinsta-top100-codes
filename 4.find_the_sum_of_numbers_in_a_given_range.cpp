/*Find the Sum of Numbers in a given range in C++
Given two integer inputs num1 and num2, the objective is to write a code to Find the Sum of Numbers in a Given Range in C. To do so we’ll keep iterating and adding the numbers from num1 until num2 to the Sum variable.

Example
Input : 2 5
Output : 2 + 3 + 4 + 5 = 20 */
#include <iostream>
using namespace std;
int main() {
  int number1,number2,sum;  
  cin>>number1>>number2;
  int n = (number2-number1) + 1;
  sum=(n/2)*(number1+number2);
  cout<<sum;
  
}

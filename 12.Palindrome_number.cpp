/*Palindrome or not
A number is a Palindrome number if the reverse of the number and the numbers itself are equal i.e. if the number and its reverse are the same then a number is a palindrome number.

Example :
Number : 12321
Reverse : 12321

Both number & reverse are equal so palindrome number.*/

#include <iostream>
using namespace std;
void palindrome(int number)
{
  int reverse =0;
  int temp;
  int d_number=number;
  while(d_number>0)
  {
    temp = d_number % 10;
    reverse = reverse * 10 +temp;
    d_number = d_number/10;
  }
  if(number == reverse)
    cout<<"it is palindrome";
  else
    cout<<"it is not palindrome";
}

int main() 
{
  int number;
  cin>>number;
  palindrome(number);
}

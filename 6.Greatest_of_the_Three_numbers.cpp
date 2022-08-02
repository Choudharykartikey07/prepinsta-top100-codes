#include <iostream>
using namespace std;

int main() 
{
  int number1,number2,number3,temp;
  cin>>number1>>number2>>number3;
  //using ternary operator
  temp = number1 > number2 ? number1:number2;
  cout<<(temp > number3 ? temp:number3);
}

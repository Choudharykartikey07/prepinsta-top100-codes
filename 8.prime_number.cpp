/*C++ program to check whether a number is prime or not
C++ Program to Check Whether the Number is Prime or Not
A prime number is a number that can be divided by 1 and itself i.e. a number that can not be divided by any other number other than 1 or itself is a prime number.
 
Example 
Input : 5
Output : 5 is a Prime*/

#include <bits/stdc++.h>
using namespace std;

int main() {
  /*int number;
  cin>>number;
  if(number==0 || number == 1)
    cout<<"it is not a prime number";
  if(number==2 || number == 3)
    cout<<"It is prime number";
  
  for(int i = 2;i<sqrt(number);i++)
  {
    if(number % i==0)
    {
      cout<<number<<" is not prime";
      break;
    }
    else
    {
      cout<<number<<" is prime";
      break;
    }
  }*/
  
  //using shieve theorem
  
  int number,i,j;
  cin>>number;
  vector<string> shieve;
  for(int i=0;i<=number;i++)
    {
      shieve.push_back("is prime");
    }
  shieve[0]="is not prime";
  shieve[1]="is not prime";
  for (i=2; i<=number;i++)
    {
     if (shieve[i]=="is prime")
     {
       for(j=i*i;j<=number;j=j+i)
       {
         shieve[j]="is not prime";         
       }
       
     }
    }
  cout<<number<<shieve[number];
  
  
}

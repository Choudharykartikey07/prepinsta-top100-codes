/* Program to find Prime Numbers in a given range in C++
Here we will discuss how to find prime numbers in the range specified by the user using C++ programming language.

Prime numbers are the numbers which have 2 divisors only 
i.e. can be divided by 1 & itself

Example: 2, 3, 5, 7, 11, 13 .... etc
In this program, the user will specify a range and we will check for every number in the range for being prime*/
#include <bits/stdc++.h>
using namespace std;
int main() 
{
  int n1,n2,i;
  cin>>n1>>n2;
  cout<<"Prime numbers between "<<n1<<" and "<< n2<< " are:- ";
  
  for(i=n1;i<=n2;i++)    
    {
      if(n1 == 0 || n1 == 1)
        continue;
      int flag = 1;
      for(int j=2;j<=i/2;j++)
      {
        if(i%j==0)
        {
          flag = 0; 
          break;          
        }        
      }
      if(flag==1)
        cout<<i<<" ";
    }
  
  //shieve method
  
  /*int n1,n2,i,j;
  cin>>n1>>n2;
  vector<string> shieve;
  
  cout<<"Prime numbers between "<<n1<<" and "<<n2<<" are:-";
  for(int i=0;i<=n2;i++)
    {
      shieve.push_back("T");
    }
  shieve[0] = "F";
  shieve[1] = "F";
  for(int i = 0 ;i<=n2 ;i++)
  {
    if(shieve[i]=="T")
    {
      for(int j=i*i; j<=n2; j=j+i)
      {
        shieve[j]="F";
      }      
    }
  }
  for(int i=n1;i<=n2;i++)
  {
    if(shieve[i]=="T")
    {
      cout<<i<<" ";
    }
  }*/
}

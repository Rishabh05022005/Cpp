//to find if a number is positive or negative
#include<iostream>
using namespace std;
int main()
{
  int a;
  cout<<"Enter Number :-";
  cin>>a;

  if(a>0)
  {
   cout<<"Entered number is positive" ;
  }
  else if (a==0)
  {
    cout<<"Enterd number is ZERO";
  }
  else
  {
    cout<<"Entered Number is NEGATIVE";
  }



  return  0;
}

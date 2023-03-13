//to check if the time is in working hours or not
#include<iostream>
using namespace std;
int main()
{
    int t;
    cout<<"Enter the time in 24hr format" ;
    cin>>t;
    if(t>=9 && t<=18)
    {
        cout<<"the time is in working hours";
    }
    else if (t<0 || t>24)
    {
        cout<<"Invalid Time";
    }
    else
    {
        cout<<"Not working Hours";
    }




 return  0;
}
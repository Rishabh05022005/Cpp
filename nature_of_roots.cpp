#include<iostream>
using namespace std;
int main()
{
    int a,b,c,D;
    cout<<"Enter the Cofficients of the quadratic equation in form ax^2+bx+c = ";
    cin>>a>>b>>c;
    D = ((b*b) - 4*a*c);
    if(D>0)
    {
        cout<<"Roots are real";
    }
    else if(D=0)
    {
        cout<<"Roots are real and equal";
    }
    else
    {
        cout<<"roots are imaginenary";
    }



    return  0;
}
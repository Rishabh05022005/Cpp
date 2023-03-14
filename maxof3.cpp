#include<iostream>
using namespace std;
int main()
{
    int a,b,c,max;
    cout<<"Enter three Numbers";
    cin>>a>>b>>c;
    if(a>b)
    {
        if(a>c)
        {
            a=max;
        }
    }
    else if(b>c)
    {
        if(b>a)
        {
            b=max;
        }
    }
    else
    {
        c=max;

    }

    cout<<"THE MAX IS "<<max;

    return  0;
}
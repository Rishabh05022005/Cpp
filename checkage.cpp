//to check if  the person is young or old
#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter age: ";
    cin>>age;
    if(age>=12 && age<=55)
    {
        cout<<"YOUNG";
    }
    else
    {
        cout<<"Invalid age ot old";
    }




    return  0;
}
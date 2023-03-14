//Arithmetic operations using switch
#include<iostream>
using namespace std;
int main()
{
    float a,b;
    int option;

    cout<<"Enter the two values to be operated on:- ";
    cin>>a>>b;

    cout<<"Choose the Operation \n 1. Addition \n 2.Subtraction \n 3.Division \n 4.Multiplication";
    cin>>option;

    switch(option)
    {
        case 1: cout<<a+b;
            break;
        
        case 2: cout<<a-b;
            break;

        case 3: cout<<a/b;
            break;

        case 4: cout<<a*b;
            break;
    }



    return  0;

}
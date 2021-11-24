    /*
    *  UCF COP3330 Fall 2021 Assignment 5 Solution
    *  Copyright 2021 Faiz Ahmed
    */
#include <iostream>
#include <math.h>
#include "std_lib_facilities.h"
using namespace std;

void roots(float a, float b, float c)
{

    float d, num1, num2;
    d=(b*b)-(4*a*c);    

    if(d<0)
        cout<<"\nThis equation has no real roots";

    else if(d==0)
    {
        num1 = (-b+(sqrt(d)))/(2*a);
        cout<<"\nThis equation has common real root:-> "<<num1;
    }
    else
    {
        num1 = (-b+(sqrt(d)))/(2*a);
        num2 = (-b-(sqrt(d)))/(2*a);
        cout<<"\nThis equation has two different real "<<"roots:";
        cout<<num1<<"and"<<num2;
    }
}

int main()
{
    float a,b,c;
    cout<<"Enter coefficients a,b,c of quadratic equation"<<"ax^2+bx+c \n";
    cout<<"Enter value of a  ";
    cin>>a;
    cout<<"Enter value of b  ";
    cin>>b;
    cout<<"Enter value of c  ";
    cin>>c;
    cout<<"Result is : ";
    roots(a,b,c);
    return 0;
}
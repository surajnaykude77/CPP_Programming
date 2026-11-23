//////////////////////////////////////////////////////////////////////////
//
// Function Name  : Addition
// Input          : Double,Double / Float,Float / Integer,Integer
// Output         : Double / Float / Integer
// Description    : Demonstrates function overloading using addition
// Date           : 23/11/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

double Addition(double  No1, double No2)
{
    double  Ans;
    Ans = No1 + No2;
    return Ans;
}
int main()
{
    double  iValue1 = 0.0,iValue2 = 0.0;
    double  iRet = 0.0;

    cout<<"enter first number :\n";
    cin>>iValue1;

    cout<<"enter second number :\n";
    cin>>iValue2;

    iRet = Addition(iValue1,iValue2);

    cout<<"addition is : "<<iRet<<"\n";

    return EXIT_SUCCESS;
}
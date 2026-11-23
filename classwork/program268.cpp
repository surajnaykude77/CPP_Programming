//////////////////////////////////////////////////////////////////////////
//
// Function Name  : Addition
// Input          : Double,Double
// Output         : Double
// Description    : Accepts two double values and performs addition
// Date           : 23/11/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

double Addition(double  iNo1, double iNo2)
{
    double  iAns = 0.0;
    iAns = iNo1 + iNo2;

    return iAns;
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
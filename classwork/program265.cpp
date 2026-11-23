//////////////////////////////////////////////////////////////////////////
//
// Function Name  : main
// Input          : Integer,Integer
// Output         : Integer
// Description    : Accepts two integers and performs addition
// Date           : 23/11/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

int main()
{
    int iValue1 = 0,iValue2 = 0;
    int iRet = 0;

    cout<<"enter first number :\n";
    cin>>iValue1;

    cout<<"enter second number :\n";
    cin>>iValue2;

    iRet = iValue1 + iValue2;

    cout<<"addition is : "<<iRet<<"\n";

    return EXIT_SUCCESS;
}
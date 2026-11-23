//////////////////////////////////////////////////////////////////////////
//
// Function Name  : Addition
// Input          : Float,Float
// Output         : Float
// Description    : Accepts two float values and performs addition
// Date           : 23/11/2026
// Author         : Suraj Navanath Naykude
//
//////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

int Addition(int iNo1,int iNo2)
{
    int iAns = 0;
    iAns = iNo1 + iNo2;

    return iAns;
}
int main()
{
    int iValue1 = 0,iValue2 = 0;
    int iRet = 0;

    cout<<"enter first number :\n";
    cin>>iValue1;

    cout<<"enter second number :\n";
    cin>>iValue2;

    iRet = Addition(iValue1,iValue2);

    cout<<"addition is : "<<iRet<<"\n";

    return EXIT_SUCCESS;
}
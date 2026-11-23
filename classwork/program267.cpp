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

float Addition(float  iNo1, float  iNo2)
{
    float  iAns = 0.0f;
    iAns = iNo1 + iNo2;

    return iAns;
}
int main()
{
    float  iValue1 = 0.0f,iValue2 = 0.0f;
    float  iRet = 0.0f;

    cout<<"enter first number :\n";
    cin>>iValue1;

    cout<<"enter second number :\n";
    cin>>iValue2;

    iRet = Addition(iValue1,iValue2);

    cout<<"addition is : "<<iRet<<"\n";

    return EXIT_SUCCESS;
}
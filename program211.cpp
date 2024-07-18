// add of even and odd digits 
#include<iostream>
using namespace std;
int SumDifference(int iNo)
{
    int iDigit=0,iSumE=0,iSum=0;

    while(iNo!=0)
    {
        iDigit=iNo%10;
        if((iDigit%2)==0)
        {
            iSumE=iSumE=iDigit;

        }
        else{
            iSum0=iSum0+iDigit;
        }
    }return iSumE-iSum0;
}

int main()
{
    int iValue=0,iRet=0;
    cout<<"Enter number:"<<endl;
    cin>>iValue;

    iRet=SumDifference(iValue);

    cout<<"Difference is:"<<iRet<<endl;
    return 0;
}
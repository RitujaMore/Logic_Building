// write the number to the power 
// removing iCnt++
#include<stdio.h>

int Power(int iNo1,int iNo2)
{
    int iCnt=0;
    int iMult=1;
    iCnt=1;
    while (iNo2>0)
    {
        iMult=iMult*iNo1;
        iNo2--;
    }
   
    return iMult;
}

int main()
{
    int iValue1=0,iValue2=0,iRet=0;

    printf("Enter first number:\n");
    scanf("%d",&iValue1);

    printf("Enter Second number:\n");
    scanf("%d",&iValue2);

    iRet=Power(iValue1,iValue2);

    printf("Answer is:%d\n",iRet);

    return 0;

}
// perfect number ... je factors aastat tyachi addition perfect nio evdi pahije trch to perfect number 
/*
accept number as no
search all its factors 
perform action of all the factors 
if addition is same as no 
then display as no is perfect number 
otherwise disaplay as no is not perfect number

*/
#include<stdio.h>
#include<stdbool.h>
bool CheckPerfect(int iNo)
{
    int iCnt=0,iSum=0;

    if(iNo<0)     
    {
        printf("please enter only positve number\n");
        return false ;
    }                    // Filter
    for (iCnt=1;iCnt<=iNo/2;iCnt++)
    {
        if((iNo%iCnt==0))
        {
            iSum=iSum+iCnt;

        }
    }
    if(iSum==iNo)
    {
        return true;
    }
    else 
    {
        return false;
    }
}
int main()
{
    int iValue=0;
    bool bRet=false;

    printf("Enter number:\n");
    sacnf("%d",&iValue);

    bRet=CheckPerfect(iValue);
    if(bRet==true)
    {
        printf("%dis perfect number\n",iValue);
    }
    else
    {
        printf("%dis not perfect number\n",iValue);
    }
    return 0;



}

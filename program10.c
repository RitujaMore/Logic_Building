#include<stdio.h>
#include<stdbool.h>

/*
start 
accept number as no 
if te number is greater thsn 30 and it is less than 50 
then display the message as number is in range otherwise 
display the m,essage as number is not in the range 
stop
*/

bool CheckRange( int iNo)
{
    if((iNo>=30)&&(iNo<=50))  // donhin true cond aasel trch true 
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

    printf("Enter number:");
    scanf("d",&iValue);

    bRet=CheckRange(iValue);
    if(bRet==true)
    {
        printf("%d is in the range 30 and 50 \n",iValue);
    }
    else
    {
        printf("%d is in not in range 30 and 50 \n",iValue );
    }
    return 0;
}
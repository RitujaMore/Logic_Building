#include<stdio.h>
#include<stdbool.h>

// user only enter positive numbers 
// Algorithm 
/*
    Start
    aacept one number as no 
    divide thta number by 2
    if remainder is 0
    then display the result as evev number
    otherwise display the result as odd number 
    Stop
*/
//////////////////////////////////////
//
//function name: check evevodd
//description: used to check number is even odd
//input: integer
//output: boolean
//author:  rituja ravindra more
//date:  16/05/2024
//
bool CheckEvenOdd(unsigned int iNo)
{
    if((iNo%2)==0)
    {
        return true;
    }
    else{
        return false;
    }
    
    
}
int main()
{
    unsigned int iValue=0;          // b ret pishvi 
    bool bRet=false;             // light band aahe so 0 i.e false 

    printf("Enter number:\n");
    scanf("%d",&iValue);

    bRet=CheckEvenOdd(iValue);  // function call   // dukansach nav 

    if(bRet==true)
    {
        printf("%d Even number\n",iValue);

    }
    else
    {
        printf("%d Odd number\n",iValue);
    }
    return 0;
    

}




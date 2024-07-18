#include<stdio.h>
#include<stdbool.h>

// user only enter positive numbers 
// Algorithm 
/*
    Start
    aacept one number as no 
    divide thta number by 3
    if remainder is 0
    divide the number no by 5
    if remainder is 0
    then print number is divisible by 3 and 5
    otherwise display the it is not divisible by 3,5 
    Stop
*/
//////////////////////////////////////
//
//function name: CheckDivisible
//description: used to check number is  divisible by 3 and 5 
//input: integer
//output: boolean
//author:  rituja ravindra more
//date:  16/05/2024
//
bool CheckDivisible(unsigned int iNo)
{
    if((((iNo%3)==0) && (iNo%5)==0))     // && - aani
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

    bRet=CheckDivisible(iValue);  // function call   // dukansach nav 

    if(bRet==true)
    {
        printf("%d is divisible by 3 and 5 \n",iValue);

    }
    else
    {
        printf("%d is  not divisible by either 3 or 5\n",iValue);
    }
    return 0;
    

}

/*

operator .............&&

first   second      && (and)      ||(or)
true     true        true       true
false    false       f           f
t         f          f           t 
f         t          f          t 


*/


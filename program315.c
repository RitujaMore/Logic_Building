// 4 th bit is on or off
/*
iNo   11     0 0 0 0 1 0 1 1  
mask         0 0 0 0 1 0 0 0
         ---------------------------&
             0 0 0 0  1 0 0 0              result 



*/
#include<stdio.h>
bool CheckBit(int iNo)
{
   unsigned int iMask=8;
   unsigned int iResult=0;

   {
    iResult=iNo&iMask;
    if(iResult==iMask)
    {
        return true;
    }
    else
    {
        return false ;
    }

   }
 
}

int main()
{
    unsigned int iValue=0;
    bool bRet=false;


    printf("enter number:\n");
    scanf("%u",&iValue);

   

    bRet=CheckBit(iValue);

    if(iResult ==iMask)
    {
        printf("4rth bit is on\n");
    }
    else{
        printf("4rth bit is off\n");
    }

    
    printf("r:\n");

    
}




/*

________________________________________________________________
op1                 op2            &            |       ^
____________________________________________________________________
1                    1            1             1       0
0                    0            0             0       0
0                    1            0             1       1
1                    0            0             1       1
________________________________________________________________
*/
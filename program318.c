// 9 th bit is on or off
/*
iNo   11     0 0 0 0 1 0 1 1  
mask         0 0 0 0 1 0 0 0
         ---------------------------&
             0 0 0 0  1 0 0 0              result 



*/
#include<stdio.h>

int main()
{
    unsigned int iNo=0;
    unsigned int iMask=256;
    unsigned int iResult=0;

    printf("enter number:\n");
    scanf("%u",&iNo);

   

    iResult=iNo & iMask;

    if(iResult ==iMask)
    {
        printf("9th bit is on\n");
    }
    else{
        printf("9th bit is off\n");
    }

    

    return 0;
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
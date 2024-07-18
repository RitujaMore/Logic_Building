// 6th and 9th bit
// 100100000
/*
iNo   11     0 0 0 0 1 0 1 1              
mask         0 0 0 0 1 0 0 0
         ---------------------------&
             0 0 0 0  1 0 0 0              



*/
#include<stdio.h>

int main()
{
    unsigned int iNo=0;
    unsigned int iMask=288;
    unsigned int iResult=0;

    printf("enter number:\n");
    scanf("%u",&iNo);

   

    iResult=iNo & iMask;

    if(iResult ==iMask)
    {
        printf("6th and 9th bit is on\n");
    }
    else{
        printf("6th and 9th bit is off\n");
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
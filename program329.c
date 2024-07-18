//10 th off




 //    1111  1111  1111  1111  1111 1101 1111 1111
 //      f     f     f     f     f    d   f    f

 

 
#include<stdio.h>

int main()
{
    unsigned int iNo=0;
    unsigned int iMask=0xfffffdff;
    
    unsigned int iResult=0;

    printf("enter number:\n");
    scanf("%u",&iNo);

   

    iResult=iNo & iMask;

    printf("updated number is:%u\n",iResult);

    

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
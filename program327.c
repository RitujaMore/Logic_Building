// 4th bit la off karaych ( 12 ip    4 op )
 // 0 0 0 0 1 1 0 0
 // 1 1 1 1 0 1 1 1
 //// &///////////
 // 0 0 0 0 0 1 0 0



 //    1111  1111  1111  1111  1111 1111 1111 0111
 //      f     f     f     f     f    f    f    7

 // 0xfffffff7

 // 11 th and 12 th 

#include<stdio.h>

int main()
{
    unsigned int iNo=0;
    unsigned int iMask=0xfffffff7;
    
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
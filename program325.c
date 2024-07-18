// 11 th and 12 th 

#include<stdio.h>

int main()
{
    unsigned int iNo=0;
    unsigned int iMask=0x0000c00;
    // 0000   0000   0000   0000   1100   0000  0000 =11 th  12th
    unsigned int iResult=0;

    printf("enter number:\n");
    scanf("%u",&iNo);

   

    iResult=iNo & iMask;

    if(iResult ==iMask)
    {
        printf("11th and 12th bit is on\n");
    }
    else{
        printf("11th and 12th bit is off\n");
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
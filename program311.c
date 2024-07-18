// to display binary and count number of ones 

#include<stdio.h>

int main()
{
    unsigned int iNo1=0,iNo2=0,iRet=0;

    printf("enter first number:\n");
    scanf("%u",&iNo1);

    printf("enterSecond number:\n");
    scanf("%u",&iNo2);

    iRet=iNo1 ^ iNo2;

    printf("result of bitwise ^ :%u\n",iRet);

    return 0;
}
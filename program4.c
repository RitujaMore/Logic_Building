//problem statement : accept 2 numbers from user and perform its addition
#include<stdio.h>
float Addition(float fNo1,float fNo2)
{
    float fAns=0.0;
    fAns=fNo1+fNo2;
    return fAns;
}
int main()
{
   
   float fValue1=0.0,fValue2=0.0;
   float fResult=0.0;
    printf("Enter first number:\n ");
    scanf("%f",&fValue1);
    printf("Enter second number:\n ");
    scanf("%f",&fValue2);
    fResult = Addition(fValue1,fValue2);
    printf("Addition is:%f\n",fResult);
    return 0;
}

//step 5

//test cases
//test the program
//inpiut 1=10.0 input 2=30.0 resukt =40.0
//input 1=10.0 input2 =0,o result=10.0
//input 1=0.o input 2=10.0 result =10.o
//imput 1=-10.0 input 2=7 resul= -3.0
//input 1 -10.0 input 2 =-7.0 result =-17
//input1=10.0 input 2=-7.0 result =3.0


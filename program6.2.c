#include<stdio.h>
                            //(shop)
float Addition(          // addition function aahe user defined aani to main chya var aasto
                float fNo1,         // first input  ( content pishvitle)
                float fNo2          // second input
                )
{
    float fAns=0.0;                 // variable to store result
    fAns=fNo1+fNo2;
    return fAns;
}
int main()            // home
{
   
   float fValue1=0.0;           // variable to store first input
   float fValue2=0.0;           // variable to store second input
   float fResult=0.0;           // variable to store return value

    printf("Enter first number:\n ");
    scanf("%f",&fValue1);

    printf("Enter second number:\n ");
    scanf("%f",&fValue2);

    fResult = Addition(fValue1,fValue2); /// function call  ( rikami pishvi bharaychi )

    printf("Addition is:%f\n",fResult);

    return 0;
}

/////aaapn aapl logic main madhye nhi lihimar

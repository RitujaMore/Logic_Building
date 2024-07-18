#include<stdio.h>
#include<stdbool.h>
// time complexity : 0(N)
void DisplayFactors(int iNo)
{
    int iCnt=0;

    printf("Factor of%d are :\n",iNo);
         //  1       2      3  
    for(iCnt=1; iCnt<iNo;iCnt++)  // suppose ivalue 8 aasel tr to tyachA mhnje 8 vha factor nasnar 
    {

      if((iNo % iCnt == 0))  // 4
    
    {
        printf("%d\n",iCnt); //4
    }
    }
}
int main()
{
    int iValue=0;
    printf("Enter number :\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;

}
#include<stdio.h>
#include<stdbool.h>
// time complexitty :0(N/2)

//loop = time complexity 

// dynamic memory = space complexity
void DisplayFactors(int iNo)
{
    int iCnt=0;

    printf("Factor of%d are :\n",iNo);
         //  1       2      3  
    for(iCnt=1; iCnt<=(iNo/2);iCnt++)  // suppose ivalue 8 aasel tr to tyachA mhnje 8 vha factor nasnar 
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
//1,2,3,4 eka khali ek display karaychyyy
// dynamic sequence code ,, pratek prinf vegl display kartoyy same nhi kart aahe i.e jay hamnuman 
#include<stdio.h>
void Display(int iNo)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("%d",iCnt);
    }
}                       
int main()
{
    int iValue=0;  // iValue local value

    printf("Enter number of times you want to dispaly numbers  on the Screen:");
    scanf("%d",&iValue);    // jo variable denar to iValue madhye store karne 

    Display(iValue);  
   
     return 0;
}
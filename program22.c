// user define aahe user la vicharl konta number ghyaycha 
// dynamic code
#include<stdio.h>

void Display(int iNo)  // ji value i.e 11 displau ni pathvleli ti iNo mahye janar 
{
    int iCnt=0;        // local variable = icnt
    //     1      2      3
    for(iCnt=1;iCnt<=iNo ;iCnt++)
    {
        printf("Jay Hanuman...\n"); // 4 
    }
            
    
}                                // return kahihi karat nhi tr void return data type 
int main()
{
    int iValue=0;  // iValue local value

    printf("Enter number of times you want to to dispaly Jay Hanuman on the Screen:");
    scanf("%d",&iValue);    // jo variable denar to iValue madhye store karne 

    Display(iValue);  
    
    return 0;
}

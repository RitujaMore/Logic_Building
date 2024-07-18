// dynamic code i.e user kadun input ghetl aahe 
#include<stdio.h>
void Display(int iNo)
{
    int iCnt=0;        // local variable = icnt,, local variable ha 0 ne stsrt hoto so 
    
    iCnt=1;            //1 
    while(iCnt<=iNo)   // 2
    
    {
        printf("Jay Hanuman...\n"); // 4 
        iCnt++; //3
    }
            
    
}                       // return kahihi karat nhi tr void return data type 
                       // return ____ kahich nhi fakt while madhye firto so void 
int main()
{
    int iValue=0;  // iValue local value

    printf("Enter number of times you want to to dispaly Jay Hanuman on the Screen:");
    scanf("%d",&iValue);    // jo variable denar to iValue madhye store karne 

    Display(iValue);  
    
    
    return 0;
}
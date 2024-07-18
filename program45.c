// check whether prime number or not 
// swataha kadhich tya no number ch factor nasto
/// factors nhi milale pahile mhnje te prime honar 
#include<stdio.h>
#include<stdbool.h>
// input :11   No/2 =5     iCnt =6
// input :17   No/2 =8    iCnt =9

// input :10  No/2 =5     iCnt =2
// input :15   No/2 =7    iCnt =3
bool CheckPrime(int iNo)
{
    int iCnt=0;
    
    if(iNo<0) // updator 
    {
        iNo=-iNo; // -(-28)          // fatlelei note ghyaychi pn chitkun ghyachi 
    }
    //      1          2        3
    for (iCnt=2;iCnt<=(iNo/2) ;iCnt++)
    {
        if((iNo%iCnt)==0) //4
        {
           
            break;
        }
       
        
    }
    if(iCnt>(iNo/2))
    {
        return true;
    
     
    }   
    else 
    {
        return false;
    }
}

int main()
{
    int iValue=0;
    bool bRet=false;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    bRet=CheckPrime(iValue);
    if(bRet==true)
    {
        printf("%dis Prime Number\n",iValue);
    }
    else
    {
        printf("%dis not Prime Numberr\n",iValue);
    }
    return 0;



}




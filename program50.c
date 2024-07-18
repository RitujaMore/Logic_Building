//problems on digits
#include<stdio.h>

int main()
{
    int iNo=438;
    int iDigit=0;


    iDigit =iNo %10;               // mod aasel tr remainder lihine 
    printf("%d\n",iDigit); //8

    iNo =iNo/10;   //43
    iDigit =iNo %10;   //3
    printf("%d\n",iDigit);  //3

    iNo =iNo/10;   //4    // slash mhnje divide lihine 
    iDigit =iNo %10;   //4
    printf("%d\n",iDigit);  //4

    iNo =iNo/10;   //0
    return 0;
}


// logic 
//8%10=8....  bhagakar 
//8/10=0..... bakiii

// 674598 %10 = 8....... bhakakar 
// 674598 /10 = 67459....... bakii 

// 0 yeyiparynt karaych 
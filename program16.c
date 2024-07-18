//pass fail student cha code bool kadhun int used 
#include<stdio.h>
// user defined macros 
#define RET_INVALID 1
#define RET_FAIL 2
#define RET_PASS 3 



int DisplayResult(float fMarks)
{ 
    if((fMarks<0.0f)||(fMarks>100.0f))  // logical or operator // filter // input validation 
    {
       return RET_INVALID;

    }
    if((fMarks>=0.0f ) && (fMarks<35.0f))
    {
        return RET_FAIL; 

    }
    else 
    {
       return RET_PASS ;
    }
    
    
}
int main()
{
    float fValue=0.0f;
    int iRet=0;

    printf("Please enter your percentage :");
    scanf("%f", &fValue);

    iRet=DisplayResult(fValue);
    if(iRet==RET_INVALID)
    {
        
        printf("your input is INVALID \n");
        
    }
    else if  (iRet==RET_FAIL)
    {
        printf("Student is FAIL\n");

    }
    else if( iRet==RET_PASS)
    {
        printf("Student is PASS\n");
    }
    return 0;



}
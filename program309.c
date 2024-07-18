// to display binary and count number of ones 

void Countone(int iNo)
{
    int iDigit=0;
    int iCount=0;

    printf("Binary conversion is \n");
    while(iNo!=0)
    {
        iDigit=iNo%2;
        if(iDigit==1)
        {
            iCount++;
        }
        iNo=iNo/2;
       printf("%d",iDigit);
       
    }
    printf("%d",iDigit);
}
int main()
{
    int iValue =0;
    printf("enter number:\n",iValue);
    scanf("%d",&iValue);

    DisplayCountone(iValue);

    return 0;
}
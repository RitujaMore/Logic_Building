// to display binary

void DisplaBinary(int iNo)
{
    int iDigit=0;
    printf("Binary conversion is \n");
    while(iNo!=0)
    {
        iDigit=iNo%2;
        printf("%d",iDigit);
        iNo=iNo/2;
    }
}
int main()
{
    int iValue =0;
    printf("enter number:\n");
    scanf("%d",&iValue);

    DisplayBinary(iValue);

    return 0;
}
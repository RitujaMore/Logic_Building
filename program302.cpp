//Count capitals

#include<iostream>                                 
using namespace std;

int CountCapitals(char *str)
{
    static int iCount=0;
    if(*str !='\0')
    {
        if((*str>='A')&&(*str<='Z'))
        {
        iCount++;
        }
        str++;
        CountCapitals(str);
    }
    return iCount;
}
   
int main()
{
   
   char Arr[30];
   int iRet=0;

   cout<<"enter string:"<<endl;
   cin.getline(Arr,30);// multiple string accept sathi 

   iRet=CountCapitals(Arr);

   cout<<"Capital letters are :"<<iRet<<endl;

    return 0;

}


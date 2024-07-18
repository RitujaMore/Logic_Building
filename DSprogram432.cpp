#include<iostream>
using namespace std;

int Addition(int Arr[],int iSize)
{
    
    int  iSum=0;
    int i=0;

   for(i=0;i<iSize;i++)
   {
    iSum=iSum+Arr[i];
   }
   return iSum;
   
}

int main()
{
    int iLength=0;
    int*ptr=NULL;
    int i=0,iRet=0;

    cout<<"Enter number of element:\n";
    cin>>iLength;

    ptr=new int (iLength);

    cout<<"Enter the Elements:\n";
    for(i=0;i<iLength;i++);
    {
        cin>>ptr[i];
    }

    cout<<"Entered elements are:\n";
    for(i=0;i<iLength;i++)
    {
        cout<<ptr[i]<<"\n";
    }

    iRet=Addition(ptr,iLength);
    cout<<"Addition is:"<<iRet<<"\n";

    delete[]ptr;

    return 0;
}
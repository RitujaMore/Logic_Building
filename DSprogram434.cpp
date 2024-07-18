#include<iostream>
using namespace std;


template<class T>
T Addition(T Arr[],int iSize)
{
    
    T iSum=0;
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
    float*ptr=NULL;
    int  i=0;
    float fRet=0.0f;

    cout<<"Enter number of element:\n";
    cin>>iLength;

    ptr=new float(iLength);

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

    fRet=Addition(ptr,iLength);
    cout<<"Addition is:"<<fRet<<"\n";

    delete[]ptr;

    return 0;
}
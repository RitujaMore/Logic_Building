#include<iostream>
using namespace std;

template<class T>
T Maximum(T Arr[],int iSize)
{
    
    T Max=Arr[0];
    
    int i=0;

   for(i=0;i<iSize;i++)
   {
    if(Arr[i]>Max)
    {
        Max=Arr[i];
    }
   }
   
   return Max;
   
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

    fRet=Maximum(ptr,iLength);
    cout<<"Maximum is:"<<fRet<<"\n";

    delete[]ptr;

    return 0;
}
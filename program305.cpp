// count even 

#include<iostream>                                 
using namespace std;
int CountEven(int Arr[],int iSize)
{
    int i=0;
    int iCount=0;

    while(i<iSize)
    {
        if(Arr[i]%2==0)
        {
            iCount++;
        }
        i++;
    }
    return iCount;
}
  
int main()
{
    int *Arr=NULL;int iRet=0;
    int iCount=0,i=0;

    cout<<"enter of elements:"<<endl;
    cin>>iCount;

    Arr=new int[iCount];

    cout<<"enter the elements:"<<endl;
    for(i=0; i<iCount; i++)
    {
        cin>>Arr[i];
    }

    iRet=CountEven(Arr,iCount);
    cout<<"number of even elments are:"<<iRet<<endl;
    
    

    delete[]Arr;

    return 0;

}







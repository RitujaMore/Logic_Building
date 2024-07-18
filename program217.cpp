// problems on n numbers related to oop
//accept numbers from users and find average 
#include<iostream>
using namespace std;
float Average(int Arr[],int iSize)
{
    int i=0,iSum=0;
    for(i=0;i<iSize;i++)
    {
        iSum=iSum+Arr[i];

    }
    return(((float)iSum/(float)iSize));
}


int main()
{
    int iLength=0,i=0;
    float fRet=0.0f;

    int *ptr=NULL;

    cout<<"Enter number of elements that you want to store:"<<endl;
    cin>>iLength;

    ptr=new int[iLength];

    cout<<"Enter the elements:"<<endl;
    for(i=0; i<iLength; i++)
    {
        cin>>ptr[i];
    }
    fRet=Average(ptr,iLength);
    cout<<"entered elements are:"<<endl;
    for(i=0;i<iLength;i++)
    {
        cout<<ptr[i]<<endl;
    }

    // ptr=(int*)malloc(sizeof(int)*iLength);
   
    delete[]ptr ; // memory is sequential so delete whole memory .... nhilihila tar 1st ch delete honar 
    
    return 0;
}


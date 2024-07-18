/// searching and sorting algoriths 


#include<iostream>
using namespace std;

int main()
{
    int *ptr=NULL;
    int iLength=0,i=0;
    cout<<"enter the no of elements:\n";
    cin>>iLength;

    ptr=new int[iLength];

    cout<<"enter the elements:\n";
    for(i=0;i<iLength;i++)
    {
        cin>>ptr[i];

    }
    cout<<"entered elements are:\n";
    for(i=0;i<iLength;i++)
    {
        cout<<ptr[i]<<"\n";
    }
    delete[] ptr;

    return 0;

}
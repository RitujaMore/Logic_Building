// accept  n no from user .&& .count each digit from individual numbers 
// problems on n numbers & // problems on digits 

#include<iostream>
using namespace std;

class ArrayX
   int CalculateDigits(int iNo)
    
        // no of digits kiti te sangt 
          //Arr[i]...arr madhlyadigit ch count 
          // while for digit counting 
            {
                int iCount=0;

                while(Arr[i]!=0)
                {
                    iCount++;
                    arr[i]=Arr[i]/10;
                }
                           
                return iCount;


        }
        void DisplayDigitsCount()
        {
            int i=0,iRet=0;
            for(i=0;i<iSize;i++)
            {
                iRet=CalculateDigits(Arr[i]);
                cout<<Arr[i]<<"contains"<<iret<<"digits in it "<<endl;
            }
        };
        
    
    



int main()
{
    int iLength=0;
    
    cout<<"enter number of elements tht you want to store :"<<endl;
    cin>>iLength;

    //ArrayX aobj(iLength); // static object 
    ArrayX *aobj=new ArrayX(iLength); // dynamic creaation 
    aobj->Accept();
    
     aobj->DisplayDigitsCount();
   
   

   delete aobj; /// dynamic memory so this line 

    return 0;
}



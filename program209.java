//take no from user & add the even digits 

import java.util.*;

class program209 {
    public static SumEvenDigits(int iNo)
    {
        int iCnt=0;
        while(iNo>0)
        {
            iDigit=iNo %10 ;
            if((iDigit %2)==0)
            {
                iSum=iSum+iDigit;
            }
            iNo=iNo/10;
        }
        return iSum;
    }

    public static void main(String Arg[]) {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0, iRet = 0;

        System.out.println("Enter number:");
        iValue = sobj.nextInt();

        iRet = SumEvenDigits(iValue);

        System.out.println("Number of digits are:" + iRet);
    }
}


//count capital letters 
//string madhl seperate letter 
//charAt  method la index denun chatAt function used 
import java.util.*;

class program260 {

    public static void main(String Arg[]) {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter your name:");

        String name = sobj.nextLine();

        int i = 0, iCnt = 0;
        char ch;

        for (i = 0; i < name.length(); i++) // Array aashe so i=0,,
        {
            ch = name.charAt(i);

            if ((ch >= 'A') && (ch <= 'Z'))

            {
                iCnt++;
            }
        }

        System.out.println("Capital letters are :" + iCnt);

    }
}

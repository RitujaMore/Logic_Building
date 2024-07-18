
//string madhl seperate letter 
//charAt  method la index denun chatAt function used 
import java.util.*;

class program259 {

    public static void main(String Arg[]) {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter your name:");

        String name = sobj.nextLine();

        int i = 0;
        for (i = 0; i < name.length(); i++) // Array aashe so i=0,,

            System.out.println(name.charAt(i));

    }
}

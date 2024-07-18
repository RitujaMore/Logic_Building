import java.util.*;

class program239 {
    public static void main(String A[]) {
        Scanner sobj = new Scanner(System.in);

        System.out.println(" enter Number of elements :");// aaray chi length milte by length fun

        int iSize = sobj.nextInt();
        int Arr[] = new int[iSize];

        System.out.println("enter the elements:");
        for (int i = 0; i < Arr.length; i++) {
            Arr[i] = sobj.nextInt(); // aacept input .....input array madhye takne
        }
        System.out.println("enter the elements:");
        for (int j = 0; i < Arr.length; j++) {
            System.out.println(Arr[j]);/// .... dipaly output
        }
    }
}

// package 36;
import java.util.Scanner;


class NumberX
{
    public int index(int [] Brr , int target)
    {
        
        int iCnt = 0 ;
        for (iCnt = 0 ; iCnt < Brr.length ; iCnt++)
        {
            if ( Brr[iCnt] == target )
            {
                break;
            }
        }
        return iCnt;
    }

}

public class program2 {

    public static void main(String Arg[])
    {
        Scanner sc = new Scanner (System.in);

        int iSize = sc.nextInt();

        int Arr[] = new int [ iSize];
        for ( int  iCnt = 0 ; iCnt < Arr.length ; iCnt++)
        {
            Arr[iCnt ] = sc.nextInt();   
        }
        int target = sc.nextInt();

        NumberX n = new NumberX();

        System.out.println(n.index(Arr , target));
    }
}

import java.util.Scanner ;


class NumberX
{
    public boolean present( int [] Brr , int target)
    {
        int  iCnt = 0;
        for (  iCnt = 0 ; iCnt < Brr.length;iCnt++)
        {
            if ( Brr [ iCnt] == target)
            {
                break;
            }
        }
        if ( iCnt == Brr.length)
        {
            return false;
        }
        else 
        {
            return true;
        }

    }
}

public class programa1 {
    public static void main(String Arg[])
    {
        Scanner sc = new Scanner (System.in);

        System.out.println("ENter the Number of elements to Store ");
        int iSize = sc.nextInt();

        int Arr[] = new int [iSize];

        for ( int iCnt = 0 ; iCnt < Arr.length; iCnt ++)
        {
            Arr[iCnt] = sc.nextInt();
        }

                System.out.println("ENter Element to Search ");
                int target = sc.nextInt();

        NumberX n = new NumberX();
       boolean bRet =  n.present(Arr , target);
        for ( int iCnt = 0 ; iCnt < Arr.length; iCnt ++)
        {
            System.out.println(Arr[iCnt]);
        }

        if ( bRet == true)
        {
            System.out.println(" Present ");
        }
        else
        {
            System.out.println("Not Present ");

        }
    }
}

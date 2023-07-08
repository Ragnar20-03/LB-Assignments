import java.util.Scanner;

class NumberX 
{
    public void Display ( int Brr[])
    {
        for ( int iCnt = 0 ; iCnt < Brr.length ; iCnt ++)
        {
            if ( Brr[iCnt] % 5 == 0 )
            {
                System.out.print( " " + Brr[iCnt]);
                Brr[iCnt] = 88;
            }
        }
    }
}

class program2 {
    
    public static void main(String Arg[])
    {
        Scanner sc = new Scanner (System.in);

        System.out.println("Enter the Number of Elements : ");
        int iSize = sc.nextInt();

        int Arr [] = new int [iSize];

        System.out.println("ENter the Elements : ");
        for ( int iCnt = 0 ; iCnt < Arr.length ; iCnt ++)
        {
            Arr[iCnt] = sc.nextInt();
        }

        NumberX nobj = new NumberX ();
        nobj.Display(Arr);
        System.out.println("");
        for ( int iCnt = 0 ; iCnt < Arr.length ; iCnt ++)
        {
            System.out.println( " "+ Arr[iCnt]);
        }

    }
}

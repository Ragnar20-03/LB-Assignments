import java.util.Scanner;


class NumberX 
{
    public void EvenDisplay ( int Brr[])
    {
        for ( int iCnt = 0 ; iCnt < Brr.length ; iCnt ++)
        {
            if ( (Brr[iCnt ] % 5 == 0 ) && (Brr[iCnt ] % 3 == 0  ))
            {
                System.out.print( " "+ Brr[iCnt]);
                Brr[iCnt] = 898989;
            }
        }
    }
}

class program4 {

    public static void main(String[] args) {
        
        Scanner sc = new Scanner ( System.in);

        System.out.println("Enter thr Number of Elements : ");
        int iSize = sc.nextInt();

        int Arr [] = new int [iSize];
        
        System.out.println("ENter the Elements : ");

        for ( int iCnt = 0 ; iCnt  < Arr.length ; iCnt ++)
        {   
            Arr[iCnt ] = sc.nextInt();
        }

        NumberX nobj = new NumberX ();
        nobj.EvenDisplay(Arr);
        for ( int iCnt = 0 ; iCnt  < Arr.length ; iCnt ++)
        {   
         System.out.println( " "  + Arr[iCnt]);
        }


    }

}

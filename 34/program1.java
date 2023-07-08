import java.util.Scanner;


class NumberX 
{

    public int Difference (int Brr[] )
    {
        int SumOdd = 0 ; 
        int SumEven = 0;

        for ( int iCnt = 0 ; iCnt < Brr.length ; iCnt ++)
        {
            if ( Brr[iCnt] % 2 == 0 )
            {
                SumEven += Brr[iCnt];
                Brr[iCnt ] = 0;
            }
            else 
            {
                SumOdd += Brr[iCnt];
                Brr[iCnt ] = 0;
            }
        }
        return ( SumEven - SumOdd);
    }
}

class program1
{
    public static void main(String Arg[])
    {
        Scanner sc =  new Scanner (System.in);

        NumberX nobj = new NumberX();

        System.out.println("Enter the Number of Elements : ");

        int iSize = sc.nextInt();

        int Arr[ ] = new int [iSize];

        System.out.println("Enter the Elements :");

        for ( int iCnt = 0 ; iCnt < Arr.length ; iCnt ++)
        {
            Arr[iCnt] = sc.nextInt();
        }
        for ( int iCnt = 0 ; iCnt < Arr.length ; iCnt ++)
        {
            System.out.print(Arr[iCnt] + " ");
        }
        
        System.out.println(" Difference is : " + nobj.Difference(Arr));

        sc.close();

    }
}
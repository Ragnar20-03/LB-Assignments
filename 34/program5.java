import java.util.Scanner;

class NumberX
{
    public void Display(int Brr[])
    {
        for ( int iCnt = 0 ; iCnt < Brr.length ; iCnt ++)
        {
            if ( Brr[iCnt] % 11 == 0 )
            {
                System.out.print(" : " + Brr[iCnt]);
            }
        }
    }
}


class prorgram5
{
    public static void main(String Arg[])
    {
        Scanner sc = new Scanner ( System.in);
        
        System.out.println("Enter the Size ");
        int iSize = sc.nextInt();

        int Arr [];
        Arr = new int [ iSize];

        System.out.println("Enter the Elements : ");
        for ( int iCnt = 0 ; iCnt < Arr.length ; iCnt ++)
        {
            Arr[iCnt] = sc.nextInt();
        }

        NumberX nobj ; 
            nobj = new NumberX();

            nobj.Display(Arr);

            sc.close();
    }
}
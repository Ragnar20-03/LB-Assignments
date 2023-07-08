import java.util.Scanner;

class DigitX
{
    public int  OddDigits( int iValue)
    {
        int iDigit = 0 ;
        int iCount = 0 ;
        int iNo = iValue;
        
        while ( iNo !=  0 )
        {
            iDigit = iNo % 10;
            if ( iDigit % 2 != 0)
            {
                iCount ++;
            }
            iNo /= 10;
        }
        return iCount;
    }
}

class program2
{
    public static void main(String Arg[])
    {
        Scanner sc = new Scanner (System.in);

        System.out.println( " Enter Number  : ");
        int iNo = sc.nextInt();

        DigitX dobj = new DigitX();

        System.out.println("Count of Odd Digits : " + dobj.OddDigits(iNo) );

        sc.close();
    }
}
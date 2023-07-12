import java.util.Scanner;


class DigitsX
{
    public void range ( int No   )
    {
        int Digit  = 0 ;
        while ( No != 0)
        {
            Digit = No%10;
            if ( Digit >= 3 && Digit <= 7)
            {
                System.out.println(Digit);
            }
            No = No / 10;
        }
    }
}

class program3
{

    public static void main(String Arg[])
    {
        Scanner sc = new Scanner (System.in);

        int no = sc.nextInt();
        
        DigitsX dobj ; 
        dobj = new DigitsX();

        dobj.range(no);

    }
}
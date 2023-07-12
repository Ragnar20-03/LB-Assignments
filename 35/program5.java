import java.awt.*;


class DigitX
{
    public int Difference(int No)
    {
        int iDigit  = 0 ;
        int odd = 0 ;
        int even = 0 ;
        while ( No !=  0)
        {
            iDigit = No % 10;
            if ( iDigit % 2 == 0)
            {
                even += iDigit;
            }
            else 
            {
                odd += iDigit;
            }
            No /= 10;
        }

        return even -odd;
    }
}


public class program5 {
    
    public static void main(String arg[])
    {
            DigitX dobj = new DigitX()
            ;
            System.out.println(dobj.Difference(Integer.parseInt(arg[0])));
    }
}

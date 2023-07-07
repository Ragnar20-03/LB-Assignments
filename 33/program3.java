
import java.util.Scanner;

class StringX
{

    private String str = "";

    private int iCount =  0; 

    StringX( String name)
    {
        this.str = name;
        this.iCount  = 0 ;
    }

        public int SmallCount ()
    {
        iCount  = 0 ;
        char Arr[] = this.str.toCharArray();

        for ( int iCnt = 0 ; iCnt < Arr.length ; iCnt ++)
        {
            if ( Arr[iCnt] >= 'a' && Arr[iCnt] <= 'z')
            {
                this.iCount ++;
            }
        }

        return this.iCount;
    }
        public int Count_Capital ( )
    {
        iCount  = 0 ;
        char Arr[] = str.toCharArray();
        for ( int iCnt = 0 ; iCnt < Arr.length ; iCnt ++)
        {
            if ( Arr[iCnt] >= 'A' && Arr[iCnt] <= 'Z')
            {
                iCount ++;
            }
        }
        return this.iCount;
    }



    public int Difference()
    {
        return (SmallCount() - Count_Capital());
    }
}

public class program3 {

    public static void main (String Arg[])
    {
    
    Scanner sc  = new Scanner ( System.in);
    String name  = sc.nextLine();

    StringX sobj = new StringX (name);

    System.out.println("Result String is : " + sobj.Difference());


    }
}

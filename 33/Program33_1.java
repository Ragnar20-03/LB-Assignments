
import java.util.Scanner;

class StringX 
{

    private String str= "";
    private int iCount = 0 ;
    StringX( String name)
    {
        this.str = name;
    }

    public int Count_Capital ( )
    {
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
}

class Program33_1
{

    public static  void  main ( String args[] )
    {
        Scanner sc = new Scanner (System.in);
    
        System.out.print("Enter Full Name : ");
        String name = sc.nextLine();

        StringX sobj = new StringX(name);

        System.out.println("Result String is : " + sobj.Count_Capital());
    }
}

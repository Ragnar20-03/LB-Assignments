import java.util.Scanner;


class StringX
{
    private int iCount  ;
    private String str;

    StringX(String name)
    {
        this.str = name;
        this.iCount = 0 ;
    }

    public int SmallCount ()
    {
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

}

class program2
{
    
    public static void main(String Arg[])
    {   
        Scanner sc = new Scanner ( System.in);

        String Name = sc.nextLine();

        StringX sobj = new StringX ( Name);
        System.out.println(":Count of Small is : " + sobj.SmallCount() );
    }
}
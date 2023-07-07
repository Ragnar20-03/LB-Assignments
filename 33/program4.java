import java.util.Scanner;

class StringX 
{
    public int Vovels (String str)
    {
        char Arr[ ] = str.toCharArray();

        int iCount = 0 ;

        for ( int iCnt = 0 ; iCnt < Arr.length ; iCnt ++)
        {
            if ( Arr[iCnt] == 'a' ||Arr[iCnt] == 'u' ||Arr[iCnt] == 'o' ||Arr[iCnt] == 'i' ||Arr[iCnt] == 'e')
            {
                iCount ++;
            }
        }
        return iCount;

    }
}


class program4
{
    public static void main(String Arg[])
    {
        Scanner Sc  = new Scanner (System.in);
        String Name = Sc.nextLine();

        StringX sobj ;
        sobj = new StringX();

        System.out.println("Count of ovels Are : " + sobj.Vovels( Name) );
    }
}
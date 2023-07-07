import java.util.Scanner;


class StringX 
{
    public static String Reverse( String Name)
    {
        char tempX = ' ';
        char Arr [] = Name.toCharArray();
        int iStart = 0;
        int iEnd = Arr.length - 1;

        while ( iStart < iEnd)
        {
             tempX = Arr[iStart];
            Arr[iStart] = Arr[iEnd];
            Arr[iEnd] = tempX;

            iStart ++;
            iEnd --;
        }
        
        return new String(Arr);
    }
}


class program5
{
    public static void main(String Arg[])
    {
        Scanner Sc  = new Scanner (System.in);
        String Name = Sc.nextLine();

        StringX sobj = new StringX();

        System.out.println(" Aftr Edit : " + sobj.Reverse(Name));
    }
}
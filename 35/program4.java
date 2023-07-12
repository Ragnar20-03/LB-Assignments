import java.util.Scanner;

class DigitX
{
    public  int Multiplication(int No)
    {
        int ans = 1 ;
        int iDigit = 0 ;
        while ( No != 0)
        {
            iDigit = No % 10;
            ans *= iDigit;
            No = No / 10;
        }
        return ans;
    }
}

class program4
{
    public static void main(String Arr[])
    {
        Scanner sc = new Scanner (System.in);

        int No = Integer.parseInt(Arr[0]);

        DigitX dobj = new DigitX();

        int iRet = dobj.Multiplication(No);
        System.out.println(iRet);
        System.out.println(No);        

    }
}
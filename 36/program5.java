import java.util.Scanner;


class NumberX
{
    public int Mult(int Brr[] )
    {
        int ans = 1;
        for ( int iCnt  = 0 ; iCnt < Brr.length ; iCnt++)
        {
            if ( (Brr[iCnt] % 2 )!= 0)
            {
                ans *= Brr[iCnt];
            }
        }
        return ans;
    }
}

class program5
{
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);

        int iSize = sc.nextInt();

        int Arr [] = new int [iSize];

        for ( int iCnt = 0  ; iCnt < Arr.length;iCnt++)
        {
            Arr[iCnt] = sc.nextInt();
        }

        NumberX n = new NumberX();

            System.out.println(n.Mult(Arr));
    }
}
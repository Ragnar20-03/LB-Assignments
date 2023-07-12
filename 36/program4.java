import java.util.Scanner;


class NumberX
{
    public void Display(int Brr[] , int start , int end)
    {
        for ( int iCnt  = 0 ; iCnt < Brr.length ; iCnt++)
        {
            if ( Brr[iCnt] >= start && Brr[iCnt] <= end)
            {
                System.out.println(Brr[iCnt] + " ");
            }
        }
    }
}

class program4
{
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);

        int iSize = sc.nextInt();

        int Arr [] = new int [iSize];

        for ( int iCnt = 0  ; iCnt < Arr.length;iCnt++)
        {
            Arr[iCnt] = sc.nextInt();
        }

        int start = sc.nextInt();
        int end = sc.nextInt();

        NumberX n = new NumberX();

            n.Display(Arr , start , end);
    }
}
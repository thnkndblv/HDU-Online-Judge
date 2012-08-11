import java.io.*;
import java.util.Scanner;
import java.math.BigInteger;

public class Main
{
    Main()
    {
        Scanner sc = new Scanner( System.in );
        int T = sc.nextInt();
        for (int kase=1; kase<=T; kase++)
        {
            BigInteger A = sc.nextBigInteger();
            BigInteger B = sc.nextBigInteger();
            if ( kase > 1 ) System.out.println("");
            System.out.println( "Case " + kase + ":" );
            System.out.println( A + " + " + B + " = " + A.add(B) );
        }
    }
    public static void main(String[] args)
    {
        new Main();
    }
}

import java.io.*;
import java.util.Scanner;
import java.math.BigInteger;

public class Main
{
    Main()
    {
        Scanner sc = new Scanner( System.in );
        int T = sc.nextInt();
        while ( T-- > 0 )
        {
            BigInteger lcm = BigInteger.ONE;
            int n = sc.nextInt();
            for (int i=0; i<n; i++)
            {
                BigInteger a = BigInteger.valueOf( sc.nextInt() );
                lcm = lcm.multiply( a ).divide( lcm.gcd( a ) );
            }
            System.out.println( lcm );
        }
    }
    public static void main(String[] args)
    {
        new Main();
    }
}

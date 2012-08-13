import java.io.*;
import java.util.Scanner;
import java.math.BigInteger;

public class Main
{
    BigInteger[] F = new BigInteger[ 2 ];
    Main()
    {
        Scanner sc = new Scanner( System.in );
        
        while ( sc.hasNextInt() )
        {
            int n = sc.nextInt();
            F[ 0 ] = BigInteger.ONE;
            for (int i=1; i<=n; i++)
                F[ i%2 ] = F[ (i-1)%2 ].multiply( BigInteger.valueOf( i ) );
            System.out.println( F[ n%2 ] );
        }
    }
    public static void main(String[] args)
    {
        new Main();
    }
}

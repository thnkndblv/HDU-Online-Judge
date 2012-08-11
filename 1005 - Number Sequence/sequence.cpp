#include <stdio.h>
#include <memory.h>
#include <vector>

using namespace std;

#define pb push_back

int last[ 7 ][ 7 ];

int main()
{
    int A, B, N;
    
    while ( scanf("%d %d %d",&A,&B,&N), A || B || N )
    {
        vector< int > f;
        f.pb( 0 );
        f.pb( 1 );
        f.pb( 1 );
        memset( last, -1, sizeof last );
        while ( true )
        {
            int n = f.size();
            int k = (f[n-1]*A + f[n-2]*B) % 7;
            if ( last[ f[n-1] ][ f[n-2] ] != -1 )
            {
                int M = last[ f[n-1] ][ f[n-2] ];
                if ( N < M ) printf("%d\n",f[N]);
                else printf("%d\n",f[M + (N-M)%(n-M)]);
                break;
            }
            last[ f[n-1] ][ f[n-2] ] = n;
            f.pb( k );
        }
    }
    
    return 0;
}

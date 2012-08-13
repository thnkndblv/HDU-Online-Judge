#include <stdio.h>
#include <algorithm>

using namespace std;

int f( int n )
{
    int ret = 1;
    while ( n != 1 )
    {
        if ( n % 2 == 0 ) n /= 2;
        else n = 3 * n + 1;
        ret++;
    }
    return ret;
}

int main()
{
    int a, b;
    
    while ( scanf("%d %d",&a,&b) == 2 )
    {
        printf("%d %d",a,b);
        int best = 0;
        if ( a > b ) a ^= b ^= a ^= b;
        for (int i=a; i<=b; i++)
            best = max( best, f( i ) );
        printf(" %d\n",best);
    }
    
    return 0;
}

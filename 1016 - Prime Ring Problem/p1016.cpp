#include <stdio.h>

int n;
int ring[ 20 ];

bool isprime(int n)
{
    for (int i=2; i<n; i++)
        if ( n % i == 0 )
            return false;
    return true;
}

void backtrack(int p, int mask)
{
    if ( p == n )
    {
        if ( !isprime( 1 + ring[p-1] ) ) return;
        for (int i=0; i<n; i++)
        {
            if ( i ) printf(" ");
            printf("%d",ring[i]);
        }
        puts("");
    }
    else
    {
        for (int i=2; i<=n; i++)
            if ( (mask&(1<<i)) && isprime( i + ring[p-1] ) )
            {
                ring[ p ] = i;
                backtrack( p+1, mask ^ (1<<i) );
            }
    }
}

int main()
{
    int test = 1;
    while ( scanf("%d",&n) == 1 )
    {
        printf("Case %d:\n",test++);
        ring[ 0 ] = 1;
        backtrack( 1, ((1<<(n+1))-1)^3 );
        puts("");
    }
    
    return 0;
}

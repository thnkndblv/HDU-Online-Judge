#include <stdio.h>

int main()
{
    int n;
    
    while ( scanf("%d",&n) == 1 )
    {
        int m = n + 1;
        if ( n%2 == 0 ) n >>= 1;
        if ( m%2 == 0 ) m >>= 1;
        printf("%d\n\n",n*m);
    }
    
    return 0;
}

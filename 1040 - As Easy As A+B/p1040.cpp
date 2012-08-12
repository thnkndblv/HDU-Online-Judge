#include <stdio.h>
#include <algorithm>

using namespace std;

int n;
int a[ 1003 ];

int main()
{
    int t;
    
    scanf("%d",&t);
    while ( t-- )
    {
        scanf("%d",&n);
        for (int i=0; i<n; i++) scanf("%d",a+i);
        
        sort( a, a+n );
        
        for (int i=0; i<n; i++)
        {
            if ( i ) printf(" ");
            printf("%d",a[i]);
        }
        puts("");
    }
    
    return 0;
}

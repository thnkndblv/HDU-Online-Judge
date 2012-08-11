#include <stdio.h>

int main()
{
    int n;
    
    while ( scanf("%d",&n), n )
    {
        int ans = 5 * n;
        int p = 0, q;
        for (int i=0; i<n; i++)
        {
            scanf("%d",&q);
            if ( q > p ) ans += 6 * (q - p);
            else ans += 4 * (p - q);
            p = q;
        }
        printf("%d\n",ans);
    }
    
    return 0;
}

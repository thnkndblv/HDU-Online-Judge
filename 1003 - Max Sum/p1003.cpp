#include <stdio.h>

#define MAXN 100005
int N;
int s[ MAXN ];
int p[ MAXN ];

int main()
{
    int T;
    
    scanf("%d",&T);
    for (int kase=1; kase<=T; kase++)
    {
        int ans = 1;
        scanf("%d",&N);
        for (int i=1; i<=N; i++) scanf("%d",s+i);
        p[0] = 1;
        for (int i=1; i<=N; i++)
        {
            if ( s[i]+s[i-1] >= s[i] )
            {
                s[ i ] += s[i-1];
                p[ i ] = p[ i-1 ];
            }
            else p[ i ] = i;
            if ( s[i] > s[ans] ) ans = i;
        }
        if ( kase > 1 ) puts("");
        printf("Case %d:\n",kase);
        printf("%d %d %d\n",s[ans],p[ans],ans);
    }
    
    return 0;
}

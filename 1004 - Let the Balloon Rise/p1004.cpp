#include <stdio.h>
#include <iostream>
#include <string>
#include <map>

using namespace std;

#define forit(i, a) for ( __typeof( a.begin() ) i = a.begin(); i != a.end(); i++ )

int main()
{
    int n;
    
    while ( scanf("%d",&n), n )
    {
        map< string, int > cnt;
        string balloon;
        for (int i=0; i<n; i++)
        {
            cin >> balloon;
            cnt[ balloon ]++;
        }
        string ans = "";
        cnt[ ans ] = 0;
        forit(it, cnt)
        {
            if ( it->second > cnt[ ans ] ) ans = it->first;
        }
        cout << ans << endl;
    }
    
    return 0;
}

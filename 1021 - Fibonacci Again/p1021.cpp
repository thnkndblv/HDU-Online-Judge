#include <iostream>

using namespace std;

int r[ 1000006 ];

int main()
{
    r[ 0 ] = 7 % 3;
    r[ 1 ] = 11 % 3;
    for (int i=2; i<1000000; i++)
        r[ i ] = ( r[ i-1 ] + r[ i-2 ] ) % 3;
    
    int n;
    while ( cin >> n ) cout << (r[n]==0 ? "yes" : "no") << endl;
    
    return 0;
}

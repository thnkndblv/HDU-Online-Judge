#include <iostream>
#include <set>
#include <vector>
#include <string>

using namespace std;

#define forit(i,a) for ( __typeof( a.begin() ) i = a.begin(); i != a.end(); i++ )

typedef long long i64;

set< i64 > S;
vector< i64 > A;

string suffix[] = {"th","st","nd","rd"};

int main()
{
    for (i64 a1=1LL; a1<=2000000000LL; a1*=2LL)
        for (i64 a2=a1; a2<=2000000000LL; a2*=3LL)
            for (i64 a3=a2; a3<=2000000000LL; a3*=5LL)
                for (i64 a4=a3; a4<=2000000000LL; a4*=7LL)
                    S.insert( a4 );

    forit(it, S) A.push_back( *it );
    
    int n;
    while ( cin >> n, n )
        cout << "The " << n << (n/10%10==1?"th":n%10<4?suffix[n%10]:suffix[0])
             << " humble number is " << A[n-1] << "." << endl;
    
    return 0;
}

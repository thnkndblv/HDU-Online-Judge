#include <iostream>
#include <string>
#include <vector>

using namespace std;

#define pb push_back

string str;

int main()
{
    int T;
    
    cin >> T;
    cin.ignore();
    while ( T-- )
    {
        getline( cin, str );
        vector< char > a;
        vector< int > b;
        for (int i=0; i<str.length(); i++)
        {
            if ( a.empty() || a.back()!=str[i] )
            {
                a.pb( str[i] );
                b.pb( 1 );
            }
            else b.back()++;
        }
        for (int i=0; i<a.size(); i++)
        {
            if ( b[i]>1 ) cout << b[i];
            cout << a[i];
        }
        cout << endl;
    }
    
    return 0;
}

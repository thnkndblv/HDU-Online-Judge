#include <iostream>

using namespace std;

int main()
{
    int T;
    
    cin >> T;
    while ( T-- )
    {
        int n, ans = 0, a;
        cin >> n;
        for (int i=0; i<n; i++)
        {
            cin >> a;
            ans += a;
        }
        cout << ans << endl;
    }
}

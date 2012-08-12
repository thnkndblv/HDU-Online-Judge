#include <iostream>
#include <string>

using namespace std;

int sumaDigitos(int n)
{
    int ret = 0;
    while ( n )
    {
        ret += n % 10;
        n /= 10;
    }
    return ret;
}

int main()
{
    string num;
    
    while ( cin >> num, num != "0" )
    {
        int n = 0;
        for (int i=0; i<num.size(); i++)
            n += num[ i ] - '0';
        while ( n > 9 ) n = sumaDigitos( n );
        cout << n << endl;
    }
    
    return 0;
}
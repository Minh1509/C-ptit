#include<bits/stdc++.h>
using namespace std;
int gcd( int a, int b)
{
    if( b ==0) return a;
    else return gcd(b , a % b);
}
int lcm( int a, int b)
{
    return a * b / gcd( a,b);
}
main()
{   int t;
    cin >> t;
    while( t--)
    {


        int m,n,a,b;
        cin >> m >> n >> a >> b;
        int cnt =0;
        int x= lcm(a,b);
        
        for( int i = m; i<= n; i++)
        {
            if( i % a ==0 || i % b ==0 || i % x  ==0) cnt++;
        }
        cout<< cnt << endl;
    }
    return 0;
}
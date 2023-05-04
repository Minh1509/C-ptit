#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd( ll a, ll b)
{
    if( b ==0) return a;
    else return gcd( b , a % b);
}
main()
{
    int t;
    cin >> t;
    while( t--)
    {
        ll a , x , y;
        cin >> a >> x >> y;
     
        int k = gcd( x,y);
        for( int i=1; i<= k; i++)
        {
           cout << a;
        }
        cout << endl;
    }
}
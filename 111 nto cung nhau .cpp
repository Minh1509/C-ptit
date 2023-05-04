#include<bits/stdc++.h>
using namespace std;
int nto( int n)
{
    for( int i = 2 ; i<= sqrt(n); i++)
    {
        if( n % i==0) return 0;

    }
    return n>1;
}
int gcd( int a, int b)
{
    if( b==0) return a;
    else return gcd( b , a % b);
}
main()
{
    int t;
    cin >> t;
    while( t--)
    {
        int n;
        cin >>n;
        int dem=0;
        for( int i=1; i<= n; i++)
        {
            if(gcd(i, n) ==1) dem++;
        }
        if(nto(dem)) cout<<"1\n";
        else cout<<"0\n";
    }
}
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int nto( ll n)

{
    for( ll i = 2; i<= sqrt(n); i++)
    {
        if( n % i==0) return 0;
    }
    return n >1;
}
main()
{
    int t;
     cin >> t;
     while( t--)
     {
        long n;
        cin >> n;
        int dem=0;
        for( int i=2; i<= sqrt(n);i++)
        {
            if(nto(i)) dem++;
        }
        cout << dem << endl;

     }
}
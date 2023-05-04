#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b)
{
    if( b ==0) return a;
    else return gcd( b , a % b);
}
long long lcm( long long a, long long b)
{
    return a * b / gcd( a,b);
}
main()
{
    int t;
    cin >> t;
    while( t--)
    {
        long long x,y,z,n;
        cin >> x >> y >> z >> n;
        long long k = lcm(x, lcm(y,z));
        long long a= pow(10,n-1);
        long long b= pow(10,n); 
        long long kq1 = (a / k) , kq2= b /k;
        if(kq1 <1 && kq2 < 1) cout << "-1\n";
        else if( kq1 * k < a  ) cout << kq1 * k + k << endl;
        else if( kq1 * k >= a ) cout << kq1 * k << endl;
        
    
    }
}
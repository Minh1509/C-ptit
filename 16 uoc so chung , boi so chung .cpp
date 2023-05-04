#include<iostream>
using namespace std;
long gcd( long a, long b)
{
    if( b==0) return a;
    else return gcd(b, a % b);
}
long lcm( long a, long b)
{
    return a * b/ gcd(a,b);
}
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long a,b;
        cin>>a>>b;
        cout<<lcm(a,b)<<" "<<gcd(a,b)<<endl;
    }
}
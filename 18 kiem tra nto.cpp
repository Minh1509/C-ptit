#include<iostream>
#include<cmath>

using namespace std;
int nto(long n)
{
    for( int i=2; i<= sqrt(n); i++)
    {
        if( n % i==0) return 0;
    }
    return n>1;
}
main()
{
    long n;
    cin>>n;
    if(nto(n)==0) cout<<"NO\n";
    else cout<<"YES\n";
}
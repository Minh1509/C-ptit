#include<iostream>
using namespace std;
long long gcd(long long a,long long b)
{
    if( b==0) return a;
    else return gcd(b, a % b);
}
long long lcm(long long a,long long b)
{
    return a * b/ gcd(a,b);
}
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long a[100], init;
        for( int i=0; i<n; i++)
        {
            a[i] = i+1;
        }
        init= a[0];
        for( int i=0; i<n-1; i++)
        {
            init= lcm(init, a[i+1]);
        }
        cout<<init<<endl;


    }
}
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void ptich(ll n)
{
    for( int i=2; i<= sqrt(n); i++)
    {
        if( n % i==0)
        {
            while( n % i==0)
            {
                cout<<i<<" ";
                n /=i;
            }
        }
    }
    if( n !=1) cout<<n;
    cout<<endl;
}
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ptich(n);

    }
}
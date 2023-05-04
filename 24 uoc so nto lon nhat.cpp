#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void ptich( ll n)
{
    int max= 0;
    for( int i=2; i<= sqrt(n); i++)
    {   if( n % i==0)
    {   
        while( n % i==0)
        {
            
            n /=i;
        }
        if( max< i) max= i;
    }
    }
    if( n !=1) cout<<n<<endl;
    else cout<<max<<endl;
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
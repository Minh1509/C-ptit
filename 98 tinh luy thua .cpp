#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        long long p;
        cin>>x>>y>>p;
        long i=1;
        for( int j=0; j<y; j++)
        {
            i= ( i * x) % p;
        }
        cout<<i<<endl;
    }
}
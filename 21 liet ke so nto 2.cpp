#include<bits/stdc++.h>
using namespace std;
int prime[1000001] ;
void sang()
{
    for( int i=0; i<= 1000000; i++) prime[i] =1;
    prime[0] = prime[1] =0;
    for( int i=2; i<= 1000; i++)
    {
        if(prime[i])
        {
            for( int j= i * i; j<= 1000000; j += i)
            {
                prime[j] =0;
            }
        }
    }
}
main()
{   int t;
cin>>t;
while(t--)
{
    int a,b;
    cin>>a>>b;
    sang();
    if(a<=b)
    {
        for( int i=a; i<=b; i++)
        {
            if(prime[i]) cout<<i<<" ";
        }
    }
    else{
        for( int i=b; i<=a; i++)
        {
            if(prime[i]) cout<<i<<" ";
        }
    }
    cout<<endl;
    
}
}
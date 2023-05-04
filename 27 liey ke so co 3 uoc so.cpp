#include<bits/stdc++.h>
using namespace std;
int nto(int n)
{
    for( int i=2; i<= sqrt(n); i++)
    {
        if( n % i==0) return 0;
    }
    return n>1;
}
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=2; i<= sqrt(n); i++)
        {
            if(nto(i)) cout<<pow(i,2)<<" ";
        }
        cout<<endl;

    }
}
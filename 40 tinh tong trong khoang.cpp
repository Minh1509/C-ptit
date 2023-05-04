#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        for( int &x: a) cin>>x;
       
        
        for( int i=0; i<k; i++)
        {   int x,y;
            cin >>x>>y;

            int sum=0;
                for( int j=x ; j<= y; j++)
                {
                    sum += a[j-1];
                }
                cout<<sum<<endl;
            
        }

    }
}
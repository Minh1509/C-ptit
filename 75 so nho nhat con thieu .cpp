#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for( int i=0; i< n-1; i++) cin >> a[i];
        int k=1;
        for( int i = 0; i < n; i++)
        {
            if( a[i] == k) 
            {
                k++;
            }
            else 
            {
                cout<<k;
                break;
            }
        }
        cout<<endl;
    }
}
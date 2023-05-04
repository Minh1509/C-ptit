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
        map<int, int> m;
        for( int &x : a) 
        {
            cin>>x;
            m[x]++;
        }
        int dem=0;
        for( int i=0; i<n; i++)
        {
            if(m[a[i]] >1)
            {
                dem += m[a[i]];
                m[a[i]] =0;
            }
        }
        cout<<dem<<endl;

    }
}
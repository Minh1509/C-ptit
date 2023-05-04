#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;
    cin>>n;
    int a[n];
    set< int> s;
    for( int i=0; i<n; i++) 
    {
        cin>>a[i];
       s.insert(a[i]);
    }
    for( auto x: s) cout<<x<<" ";

}

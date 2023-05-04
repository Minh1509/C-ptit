#include<bits/stdc++.h>
using namespace std;

main()
{   int t;
cin>>t;
while(t--)
{
    int n , m;
    cin >> n >>m;
    long a[n], b[m];
    multiset < long > s;
    for( long &x : a) 
    {
        cin>>x;
        s.insert(x);
    }
    for( long & x: b)
    {
        cin>>x;
        s.insert(x);
    }
    for( long x: s) cout<<x<<" ";
    
    cout<< endl;

}
}
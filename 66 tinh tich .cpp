#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin >> t;
    while( t--)
    {
        int n,m;
        cin >> n >> m;
        long a[n], b[m];
        for( long &x : a) cin>> x;
        for( long &x : b) cin>>x;
        sort( a, a+n);
        sort( b, b+ m);
        cout << a[n-1] * b[0] << endl;
    }
}
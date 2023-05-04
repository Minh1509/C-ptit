#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin >> t;
    while( t--)
    {
        int n;
        cin >> n;
        int a[n];
        for( int &x : a) cin>> x;
        sort( a, a+ n);
        int l=0, r= n-1;
        while( l< r)
        {
            cout << a[r] << " " << a[l] << " ";
            l += 1;
            r -= 1;
        }
        if( l == r) cout << a[r];
        cout << endl;
    }
}
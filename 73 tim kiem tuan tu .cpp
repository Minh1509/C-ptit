#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        for( int & x : a) cin>> x;
        auto it = find ( a, a+ n, k);
        if( it < a+ n) cout << it+1 - a << endl;
        else cout << "-1\n";
    }
}
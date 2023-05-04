#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin >> t;
    while( t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        map < int, int > mp;
        for( int & x : a)
        {
            cin>> x;
            mp[x]++;
        }
        auto it= find( a, a+ n, k);
        if( it < a+n )  cout<< mp[*it]<<endl;
        else cout<< "-1\n";
    }
}
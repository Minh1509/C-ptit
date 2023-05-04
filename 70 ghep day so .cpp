#include<bits/stdc++.h>

using namespace std;
main()
{   int t;
cin>>t;
while(t--)
{
    int n , m;
    cin >> n >>m;
    int a[n][m];
    multiset < int > s;
    for( int i=0; i< n; i++)
    {
        for( int j= 0 ; j<m ; j++) 
        {
            cin >> a[i][j];
            s.insert(a[i][j]);
    }
    }
    for( int x: s) cout<<x<<" ";
    
    cout<< endl;

}
}
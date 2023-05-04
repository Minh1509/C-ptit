#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin>> t;
    while( t--)
    {
        int n ;
        cin >> n;
        int a[n];
        set< int > s;
        for( int &x : a) 
        {
            cin >> x;
            s.insert( x);
        }
        int dem=0;
        if( s.size() < 2) cout << "-1\n";
        
        else 
        {
            for( auto it= s.begin(); it != s.end(); it++)
            {
                if(dem < 2) cout<< *it<< " ";
                dem++;
            }
        }
        cout<<endl;
    }
}
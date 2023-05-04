#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
     cin >> t;
     while(t--)
     {
        int n;
        cin >> n;
        int a[n];
        for( int &x: a) cin >>x;
        int max= -10000;
        for( int i=0; i < n-1; i++)
        {
            for( int j= i+1; j< n;j++)
            {   
                int x= a[j] - a[i];
                if(x >0 && x > max ) max = x;
            }
        }
        if( max == -10000) cout << "-1\n";
        else cout << max << endl;
     }
}
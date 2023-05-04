#include<bits/stdc++.h>
#include<algorithm>

using namespace std;
bool cmp( int a , int b)
{
    return a < b;
}
main()
{
    
        int n;
        cin >> n;
        int a[n][n];
        int b[n][n] ;
        vector< int > v;
        for( int i=0; i< n; i++)
        {
            for( int j =0 ; j < n; j++) 
            {
                cin >> a[i][j];
                v.push_back(a[i][j]);
            }
        }
        sort( v.begin(), v.end(), cmp);
        int h1= 0, h2= n-1, c1= 0, c2= n-1 , tmp= 0;
        while( h1 <= h2 && c1 <= c2)
        {
            for( int i=c1; i<= c2;i++)
            {
                b[h1][i] = v[tmp];
                tmp++;
            }
            h1++;
            for( int i= h1; i<= h2; i++)
            {
                b[i][c2] = v[tmp];
                tmp ++;
            }
            c2--;
            if( h1 <= h2)
            {
                for( int i= c2; i>= c1; i--)
                {
                    b[h2][i] = v[tmp];
                    tmp++;
                }
                h2--;
                
            }
            if( c1 <= c2)
            {
                for( int i= h2; i>= h1 ; i--)
                {
                    b[i][c1] = v[tmp];
                    tmp++;

                }
                c1++;
            }
        }
        for( int i=0; i < n; i++)
        {
            for( int j=0; j<n; j++) cout << b[i][j] << " ";
            cout << endl;
        }
        
    
}
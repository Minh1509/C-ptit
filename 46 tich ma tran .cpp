#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,m,p;
    cin>> n >> m >> p;
    int a[n][m], b[m][p], ab[n][p];
    for( int i=0; i<n; i++)
    {
        for(int j=0; j<m; j ++) cin>>a[i][j];
    }
    for( int i=0; i<m; i++)
    {
        for(int j=0; j<p; j ++) cin>>b[i][j];
    }
    for( int i=0; i<n; i++)
    {
        for( int j=0; j<p ; j++)
        {   ab[i][j] =0;
            for( int k=0; k<m; k++)
            {
                ab[i][j] += a[i][k] * b[k][j];
            }
            
                
    
        }
    }
    for( int i=0; i<n; i++)
    {
        for(int j=0; j<p; j ++) cout<<ab[i][j]<<" ";
        cout<<endl;
    }
}
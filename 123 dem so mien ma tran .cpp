#include<bits/stdc++.h>
#include<ctype.h>
#include<algorithm>
#include<iostream>
#include<stdlib.h>
using namespace std;
// thiet lap 8 o xung quang
/*
x-1, y-1   x-1, y    x-1, y+1;
x, y-1     x,y       x, y+1;
x+1, y-1   x+1, y    x+1, y+1;
*/
int n,m,a[100][100];
int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1 };
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
void solve( int i, int j)
{
    a[i][j] = 0 ;// khi xet xong vi tri a[i][j] =1 se cho vi tri do = 0 ;
    for( int k =0; k< 8; k++)
    {
        int i1= i+ dx[k]; 
        int j1= j+ dy[k]; // x(i1, j1);
        if(i1 >= 0 && i1 < n && j1 >=0 && j1 < m &&  a[i1][j1]==1) 
        solve(i1, j1);

    }
}
main()
{
    int t;
    cin >> t;
    while( t--)
    { 
        cin >> n >> m;
        
        int cnt =0;
        for( int i =0; i<n ;i++)
        {
            for( int j =0; j< m; j++) cin >> a[i][j];
        }
        for( int i=0; i<n; i++)
        {
            for( int j =0;j < m; j++)
            {
                if(a[i][j] == 1)
                {
                    cnt++;
                    solve(i, j );
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
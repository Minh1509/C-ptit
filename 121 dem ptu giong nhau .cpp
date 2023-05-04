#include<bits/stdc++.h>
using namespace std;
#include<algorithm>
main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n][n];
        for( int i=0; i< n; i++)
        {
            for( int j =0; j< n; j++) cin >> a[i][j];
        }
        map < int, int> mp;
        int cnt =0;
        // khoi tao cho tat ca cac ptu trong dong dau tien mp[i] = 1;
        for( int i=0; i< n; i++) mp[a[0][i]] = 1;
        
        // xet tu hang 1 den cuoi
        // neu hang nao đã có mp[a[i]j] == i tức là trước đó đều xuất hiện ở các hàng thì số đó mp[x]++;
        for( int i=1; i< n ; i++)
        {
            for( int j = 0; j < n ; j++)
            {
                if(mp[a[i][j]] == i) mp[a[i][j]]++;
            }
        }
        for( auto it : mp)
        {
            if( it.second == n)
            cnt++;
        }
        cout << cnt << endl;
    }
}
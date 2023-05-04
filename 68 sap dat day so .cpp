/// su dung ham tim kiem de tim trong mang 
// tra ve vi tri con tro
// neu co se tra ve < n-1 
// neu ko vi tri =n
#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin >> t;
    while( t--)
    {
        int n;
        cin>>n;
        long long a[n];
        for( long long & x : a)
        {
            cin>>x;
        }
        for( int i=0 ; i<n; i++)
        {
            auto it= find(a, a + n , i);
            {
                if( it == a+n) cout<< "-1"<< " ";
                else cout<< i << " ";
            }
        }
        cout << endl;
    }
}
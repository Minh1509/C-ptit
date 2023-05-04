// co 1 ham tach cac chu so 
// sau do luu luon vao 1 set
#include<bits/stdc++.h>
using namespace std;


main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        set<int> s;
        for( int &x :a)
        {
            cin >> x;
            while( x != 0)
            {
                int a= x % 10;
                s.insert(a);
                x /=10;
            }
        }
        for( int x : s) cout << x << " ";
        cout << endl;
      
    }
}
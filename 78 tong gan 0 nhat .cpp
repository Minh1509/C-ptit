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
        for( int &x: a) cin >> x;
        int min = 1000;
        for( int i=0; i< n-1; i++)
        {  
            for( int j =i+1; j< n; j++)
            {
               int tmp = a[i] + a[j];
                if( abs(tmp) < abs(min)) min= tmp;
            }
        }
        cout << min << endl;
    }
}

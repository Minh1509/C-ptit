#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin >> t;
    while( t--)
    {
        long n;
        cin >> n;
        int i =1;
        int cnt =0;
        while( i <= n /i)
        {
            if(n % i ==0 ) 
            {
            if( i % 2 ==0) cnt++;
            if( n / i % 2 == 0) cnt++;
            if( n / i == i && i % 2 ==0) cnt--;
            }
            i++;
        }
        cout << cnt << endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
long long tong(long long x)
{   
    if( x <10) return x;
    else
    {   long long sum=0;
        while( x !=0)
        {
            sum += x % 10;
            x /=10;
        }
        return tong(sum);
    }
}
main()
{
    int t;
    cin >> t;
    while( t--)
    {
        string s;
        cin >> s;
        long long cnt=0;
        for( int i=0; i< s.size(); i++)
        {
            cnt += s[i] - '0';
        }
      
       
        if(tong(cnt)==9 ) cout << "1\n";
        else cout << "0\n";
    }
}
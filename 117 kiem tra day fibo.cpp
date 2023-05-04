#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int fibo( ll n)
{
    ll fb[100];
    fb[0] = 0 , fb[1] = 1;
    if( n ==0 || n ==1) return 1;
    for( int i=2; i<= 92; i++)
    {
        fb[i] = fb[i-1] + fb[i-2];
        if(fb[i] == n) return 1;
    }
    return 0;
    
}
main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for( int &x : a) 
        {
            cin >> x;
            if(fibo(x)) cout << x << " ";
        }
        cout << endl;
    }
}
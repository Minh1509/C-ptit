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
        int a= n % 10, b= (n /10) % 10;
        if( a==6 && b == 8) cout<<"1\n";
        else cout<<"0\n";
    }
}
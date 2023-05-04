#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        int ok=1;
        while( n >=10)
        {
            int a= n % 10;
            int b= (n /10) % 10;
            if(abs(a-b) !=1)
            {
                ok=0;
                break;
            }
            
            n /=10;
        }
        if(ok==1) cout<<"YES\n";
        else cout<<"NO\n";
    }
}
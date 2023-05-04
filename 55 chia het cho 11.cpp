#include<bits/stdc++.h>
// dau hieu chia het cho 11
// tong cac chu so hang le - tong chu so hang chan % 11 ==0
// hoac chan - le % 11 ==0
using namespace std;
main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string s;
        cin>>s;
        int sum1 =0, sum0=0;
        for( int i=0;i < s.size(); i++)
        {
            if( i % 2==0) sum0 += s[i] - '0';
            else sum1+= s[i] - '0';
        }
        if((sum1 - sum0) % 11 ==0 || ( sum0 - sum1) % 11 ==0) cout<<"1\n";
        else cout<<"0\n"; 
    }
}
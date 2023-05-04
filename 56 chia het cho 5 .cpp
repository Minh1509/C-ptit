#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string s;
        cin>>s;
        long long n= s.size()-1;
       long long sum=0, tmp=1;
        for( int i= n; i>=0; i--)
        {
            sum += (s[i] - '0') * tmp;
            tmp *= 2;
            tmp %=10;
            sum %=10;
        }
        
        if( sum % 5==0) cout<<"Yes\n";
        else cout<<"No\n";
    }
}
#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string s;
        int n;
        
      cin>>s>>n;
        set<char> ss;
        for( int i=0; i< s.size(); i++) ss.insert(s[i]);
        int k= ss.size();
        if((k+n) >= 26) cout<<"1\n";
        else cout<<"0\n";
    }
}
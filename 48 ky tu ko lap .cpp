#include<bits/stdc++.h>
#include<map>

using namespace std;
main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string s;
        getline(cin,s);
        map<char, int> m;
        for( int i=0; i< s.size(); i++)
        {
            m[s[i]]++;
        }
        for( int i=0; i< s.size(); i++)
        {
            if(m[s[i]] ==1) cout<<s[i];
        }
        cout<<endl;
    }
}
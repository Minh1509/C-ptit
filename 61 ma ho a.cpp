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
        cin>>s;
        map<char, int > mp;
        for( char x : s) mp[x]++;
        for( int i=0; i< s.size(); i++)
        {
            if(mp[s[i]] >=1)
            {
                cout<<s[i]<<mp[s[i]];
                mp[s[i]] =0;
            }
        }
        cout<<endl;

    }
}
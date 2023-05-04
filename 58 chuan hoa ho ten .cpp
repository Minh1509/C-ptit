#include<bits/stdc++.h>
using namespace std;
void chuanhoa( string &a)
{
    for( int i=0; i< a.size(); i++)
    {
        a[i] = toupper(a[i]);
    }
}
main()
{
    string s;
    getline(cin, s);
    for( int i=0; i< s.size(); i++) s[i] = tolower(s[i]);
    stringstream ss(s);
    string tmp;
    vector<string> v;
    while(ss>>tmp)
    {   
        v.push_back(tmp);
    }
    for( int i=0; i< v.size()-1; i++)
    {
        v[i][0] = toupper(v[i][0]);
    }
    chuanhoa(v[v.size()-1]);

    
    for( int i=0; i<v.size()-1; i++)
    {
       
       if(i== v.size()-2) cout<<v[i];
       else cout<<v[i]<<" ";
    }
    cout<<", "<<v[v.size()-1];

    
}
#include<bits/stdc++.h>
using namespace std;
int thuannghich(string &a)
{
    int l =0, r= a.size()-1;
    while( l<= r)
    {
        if( l !=r) return 0;
        l++;
        r--;
    }
    return 1;
}
bool cmp(string a, string b)
{
    if(a.size() > b.size()) return true;
    if(a.size() == b.size() && a> b) return true;
    return false;
}
int main()
{
    string s;
    map<string , int > mp;
    vector < string > v;
    while( cin >> s)
    {
        if(thuannghich(s) ) 
        {
            v.push_back(s);
        
        }
    }
    sort(v.begin(), v.end(), cmp);
    for( int i=0; i< v.size(); i++) cout << v[i] <<" ";
    for(string x : v)
    {
        mp[x]++;
    }
    for( int i=0; i< v.size(); i++)
    {
        if(mp[v[i]] >=1)
        {
            cout << v[i] << " " << mp[v[i]] << endl;
            mp[v[i]] =0;
        }
    }
    
    
    


}
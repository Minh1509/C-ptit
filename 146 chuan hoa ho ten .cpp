#include<bits/stdc++.h>
using namespace std;
void chuanhoa( string &s)
{
    s[0] = toupper(s[0]); // chuan hoa viet hoa chu cai dau
}
void solve(int n, vector<string > v)
{   
    for( int i =0; i < v.size(); i++)
        {
            chuanhoa(v[i]); // chuan hoa chu cai dau cua tung ho, dem, ten

        }
    if( n ==1)
    {
        
        cout << v[v.size() -1] << " ";
        for( int i=0; i< v.size()-1; i++) 
        {
            if(i < v.size()-1) cout << v[i] << " ";
            else cout << v[i];
        }

    }
    else if(n==2){
        for( int i=1; i< v.size(); i++) cout << v[i] << " ";
        cout << v[0] ;
    }
    cout << endl;
}
main()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        int n;
        cin >> n;
        cin.ignore();
        string s;
        getline(cin ,s);
        for( int i=0; i<s.size(); i++)
        {
            s[i] = tolower(s[i]);
        }
        stringstream ss(s);
        string tmp;
        vector < string > v;
        while(ss >> tmp )
        {
            v.push_back(tmp);
        }
        solve(n, v);

    }
}
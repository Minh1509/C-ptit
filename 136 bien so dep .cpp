#include<bits/stdc++.h>
using namespace std;
int biensodep( vector<int > v)
{
    
        if(v[0] < v[1] && v[1] < v[2] && v[2] < v[3]  && v[3] < v[4]) return 1;
        else if( v[0] == v[1]  && v[1] == v[2]  && v[2] == v[3]  && v[3]  == v[4] ) return 1;
        else if( (v[0] == v[1] && v[1] == v[2] ) && (v[3] == v[4]) ) return 1;
        else if( (v[0] == 6 || v[0] == 8 ) && ( v[1] == 6 || v[1] == 8) && (v[2] == 6 || v[2] == 8) && (v[3] == 6 || v[3] == 8) && (v[4] == 6 || v[4] == 8)) return 1;

            return 0;
    
}
main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        vector<int > v;
        for( int i= 5; i<= 7; i++)
        v.push_back(s[i]-'0');
        for( int i= 9; i<= 10; i++) v.push_back(s[i] - '0');
        
       if(biensodep(v) ==1) cout << "YES\n";
       else cout << "NO\n";


    }
}
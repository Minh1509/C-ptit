#include<bits/stdc++.h>
#include<string>
#include<set>

using namespace std;
main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string x,y;
        getline(cin,x);
        getline(cin,y);
        set<string> s1;
        set<string> s2;
        stringstream ss1(x);
        stringstream ss2(y);
        
        string tmp, cnt;
        while(ss1>>tmp) s1.insert(tmp);
        while(ss2>>cnt) s2.insert(cnt);
        for( string i: s1)
        {
            if(s2.find(i) == s2.end()) cout<<i<<" ";
        }
        cout<<endl;
    }
}
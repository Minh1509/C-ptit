#include<bits/stdc++.h>
using namespace std;
main()

{
    string a, b;
    getline(cin,a);
    cin>>b;
    stringstream ss(a);
    string tmp;
    while(ss>>tmp)
    {
        if(tmp != b) cout<<tmp<<" ";
    }
    
}
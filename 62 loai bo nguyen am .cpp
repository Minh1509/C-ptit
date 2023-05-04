#include<bits/stdc++.h>
using namespace std;
int check(char x)
{
    return x== 'u'|| x=='e'|| x=='o'||x=='a'||x=='y'||x=='i';
}
int main()
{
    string s;
    getline(cin,s);
    vector<char> v;
    for( auto x: s)
    {
        v.push_back(tolower(x));
    }
    for( int i=0; i< v.size(); i++)
    {
        if(!check(v[i])) cout<<"."<<v[i];
    }
    
}
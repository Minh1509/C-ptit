#include<bits/stdc++.h>
#include<algorithm>
#include<cctype>
#include<cstring>
#include<stdlib.h>
using namespace std;
void tach( int x)
{   int sum=0;
    if( x< 10) return ;
    else{
        while(x !=0)
        {
            sum += x % 10;
            x /=10;
        }
        tach(sum);
    }
    
}
int tong( vector<int> v)
{   int sum=0;
    for( int i=0; i < v.size(); i++)
    {
        sum += v[i];
    }
   
    return sum;
}
main()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        string s;
        cin >> s;
        multiset<char > ms;
        vector < int > v;
        for( int i=0; i< s.size(); i++)
        {
            if(s[i] >= 'A' && s[i] <= 'Z')
            {
                ms.insert(s[i]);
            }
            else v.push_back(s[i]- '0');
        }
        for( char x : ms) cout << x;
        cout<<tong(v);
        cout << endl;


    }
}
#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        for( char &x : s) 
        {
            if(isalpha(x)) x= ' ';
        }
        stringstream ss(s);
        string tmp;
        long long  max =0;
        while( ss >> tmp)
        {
            long long x= stoll(tmp);
            if( x> max) max= x;
        }
        cout << max << endl;

    }
}
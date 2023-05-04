#include<bits/stdc++.h>
#include<cctype>
using namespace std;
main()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        string s;
        cin >> s;
        int dem1= 0;
        set < char > se;
        for( int i=0; i< s.size(); i++){
            if(isalpha(s[i])) dem1++;

        }
        if( dem1 != 0 || s[0] == '0') cout << "INVALID\n";
        else{
            for( int i=0 ; i< s.size(); i++)
            {
                se.insert(s[i]);
            }
            if(se.size() == 10) cout << "YES\n";
            else cout << "NO\n";
        }
    }
}
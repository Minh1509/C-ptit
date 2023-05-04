#include<bits/stdc++.h>
using namespace std;
// mp[max] - 1 <= s.size() - mp[max] in 1;
// else in 0
main()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        string s;
        cin >> s;
        map < char, int> mp;
        char max;
        int dem=0;
        for( int i=0; i< s.size(); i++)
        mp[s[i]]++;
        for( int i=0; i< s.size(); i++)
        {
            if( mp[s[i]] > dem)
            {
                max = s[i];
                dem = mp[s[i]];
            }
        }
        if( mp[max] -1  > s.size() - mp[max]) cout << "0\n";
        else cout << "1\n";
    }
}
#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char kytu= ' ';
        int dem=0, c=0, l=0;
        while(kytu == ' ')
        {
            int x;
            cin>>x;
            dem++;
            if( x % 2==0) c++;
            else l++;
            kytu = getchar();
        }
        if((dem % 2 ==0 && c>l) || ( dem % 2 ==1 && l > c)) cout<<"YES\n";
        else cout<<"NO\n";
    }
}
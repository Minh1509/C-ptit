#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,m;
        cin>>a>>m;
       int i;
        for( i=1; i<= m-1; i++)
        {
            if( (a * i) % m==1)
            {
                cout<<i<<endl;
                break;
            }

        }
        if(i==m) cout<<"-1\n";

    }
}
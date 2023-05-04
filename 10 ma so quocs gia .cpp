#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        int a[ 100], k=0;
        while( n !=0)
        {
            a[k] = n % 10;
            k++;
            n /= 10;
        }
        int x=0;
        for( int i=0; i<k-2; i++)
        {
            if(a[i] ==4 && a[i+1] ==8 && a[i+2] == 0)
            {
                x=i;
                break;
            }
            
        }
        for( int i=k-1; i>x+2;i--) cout<<a[i];
        for( int i= x-1; i>=0; i--) cout<<a[i];
        cout<<endl;
    }
}
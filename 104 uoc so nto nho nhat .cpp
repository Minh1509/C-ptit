#include<bits/stdc++.h>
using namespace std;
int prime[10001] ;
void sang()
{
    for( int i=1; i<= 10000; i++) prime [ i]= i;
    for( int i=2; i<= 100; i++)
    {
        if(prime[i] == i)
        {
            for( int j = i * i; j <= 10000; j+= i)
            {
            if(prime[j] == j) prime[j] = i;
            }
        }
    }
}
main()
{
    int t;
    cin >>t;
    sang();
    while(t--)
    {
        int n;
        cin >> n;
        for( int i=1; i<= n ; i++)
        {
            cout<< prime[i]<< " ";
        }
        cout << endl;
    }
}
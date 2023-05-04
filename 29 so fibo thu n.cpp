#include<bits/stdc++.h>
using namespace std;
using ll= long long;
void fibo(int n)
{
    ll fb[100];
    fb[0] =0, fb[1] =1;
    
    for( int i=2; i<= 92; i++)
    {
        fb[i] = fb[i-1] + fb[i-2];
    }
    cout<<fb[n]<<endl;
    
}
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        fibo(n);
    }

}
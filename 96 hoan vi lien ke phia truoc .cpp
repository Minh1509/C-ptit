#include<bits/stdc++.h>
using namespace std;
void in(int n, int a[])
{
    for( int i=1; i<= n; i++) cout << a[i] << " ";
    cout << endl;
}
void sinh(int n, int a[])
{
    int i= n;
    while( i> 0 && a[i] > a[i-1] ) i--;
    swap(a[i-1], a[i]);
    reverse(a+i, a+n);
    in(n,a);

}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n ;
        cin >> n;
        int a[n];
        for( int i=1; i<=n; i++) cin >> a[i];
        sinh(n,a);
    }
}
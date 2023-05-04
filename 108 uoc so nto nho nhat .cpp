#include<bits/stdc++.h>
using namespace std;
int nto( long n)

{
    for ( int i=2; i<= sqrt(n); i++)
    {
        if( n % i==0) return i;
    }
    return n;

}


main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long n;
        cin >> n;
       
        for(int i=1; i<= n; i++)
        {   
            cout<< nto(i)<<" ";
        }
        cout << endl;

    }
}
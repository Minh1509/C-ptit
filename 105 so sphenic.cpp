#include<bits/stdc++.h>
using namespace std;
void ptich( int n)
{   int dem1 =0;
    for( int i=2; i<= sqrt(n) ; i++)
    {
        if( n % i==0) 
        {   int dem2 =0;
            while( n % i ==0)
            {
                dem1++;
                dem2++;
                n /=i;
            }
            if(dem2 >1) 
            {cout<< "0\n";
                return ;
            }
            
        }
    }
    if( n !=1) dem1++;
    if(dem1 == 3) cout<<"1\n";
    else cout << "0\n";
}
main()
{
    int t;
    cin >> t;
    while( t--)
    {
        int n;
         cin >> n;
         ptich(n);
        
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        double a,b,c,d;
        cin>>a>>b>>c>>d;
        double x= c-a, y= d-b;
        double m= pow(x,2), n= pow(y,2);
        double kc= sqrt(m+n);
        cout<<setprecision(4)<<fixed<<kc<<endl;

    }
}
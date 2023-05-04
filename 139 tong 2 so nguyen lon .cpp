#include<bits/stdc++.h>
using namespace std;
void canbangxau( string &a, string &b)
{
    while( a.size() < b.size())
    {
         a= '0' + a;
    }
    while( b.size() < a.size())
    {
        b= '0'+ b;
    }

}
main()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        string a, b;
        cin >> a >> b;
        canbangxau(a,b);
        int du =0; // luu so du tai moi phep;
        string res= "";
        for( int i= a.size()-1; i>= 0; i--)
        {
            int k = (a[i] - '0') + ( b[i] - '0') + du;
            du = k /10; // ben nho ;
            res = (char)((k % 10) + '0')  + res ;

        }
        if( du) res = '1' + res;
        cout << res << endl;
        
    }
}
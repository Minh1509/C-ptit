#include<bits/stdc++.h>
using namespace std;
void canbangxau( string &a, string &b)
{
    while( a.size() < b.size())
    a = '0'+ a;
    while( b. size() < a.size()) b= '0'+ b;
}

void hieu2xau(string &a, string &b)
{   
    int nho=0 , k=0;
    string res = "";
    for( int i= a.size()- 1; i >= 0; i--)
    {   
        
        int x= (a[i] - '0') - (b[i] - '0')-nho;
        if( x< 0) 
        {
            x+=10;
            nho = 1;
        }
        else nho =0;
        
        
       
        res = (char) (x + '0')+ res;
    }
   cout << res<<endl;
    
}
main()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        string a, b;
        cin >> a ;
        cin.ignore();
        cin >> b;
        canbangxau(a,b);
       if(a< b) hieu2xau(b,a);
       else if( a>=b) hieu2xau(a,b);

        


    }
}
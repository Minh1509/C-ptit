#include<bits/stdc++.h>
using namespace std;
void tonglonnhat(string a, string b)
{
    for( int i=0; i< a.size(); i++)
    {
        if((a[i] =='5'))
        a[i] ='6';
       
    }
    for( int i=0; i< b.size(); i++)
    {
        if(b[i] == '5' ) b[i] = '6';
    }
    long long c= stoll(a);
    long long d= stoll(b);
    cout<<c+d<<endl;
}
void tongnhonhat(string &a, string &b)
{
    for( int i=0; i< a.size(); i++)
    {
        if(a[i] == '6') 
        a[i] ='5';
    }
    for( int i=0; i< b.size(); i++)
    {
        if(b[i] == '6') b[i] = '5';
    }
    long long c= stoll(a), d= stoll(b);
    cout<<c+d<<" ";
}

main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        tongnhonhat(a,b);
        tonglonnhat(a,b);
        
       
        


    }
}
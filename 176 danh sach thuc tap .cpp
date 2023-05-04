#include<bits/stdc++.h>
using namespace std;
struct ds
{
    string  msv, hoten , lop , email, ten;
    int id;
};


 bool cmp(ds a, ds b)
{
    if( a.hoten < b.hoten) return true;
    return false;
}
 
 main(){
    ds a[100];
    int n;
    cin >> n;
    cin.ignore();
    for( int i=0; i< n; i++)
    {
        a[i].id = i+1;
        getline(cin , a[i].msv);
        getline( cin , a[i].hoten);
        getline( cin , a[i].lop);
        getline( cin , a[i].email);
        getline(cin , a[i].ten);

    }
    sort ( a, a+n, cmp);
    int k;
    cin >> k;
    cin.ignore();
    string tmp[5];
       
    for( int i=0; i< k ;i++)  cin >> tmp[i];
    
    for( int j= 0; j < k ; j++)
    { 
        for( int i=0; i < n; i++)
            {
                if(a[i].ten == tmp[j])
                {
                    cout << a[i].id << " " << a[i].msv << " "<< a[i].hoten << " " << a[i].lop << " " << a[i].email << " " << a[i].ten << endl;
                }
            }
    }
 }
    
    
 
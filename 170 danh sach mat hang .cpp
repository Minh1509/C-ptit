#include<bits/stdc++.h>
using namespace std;
struct Mh
{
    int ma;
    string ten , nhom;
    double mua , ban, loinhuan;
};
int z =0;
void nhap ( Mh a[], int n)
{
    if( z==0) cin.ignore();
    z++;
    for( int i=0; i< n; i++)
    {
        a[i].ma = i+1;
        getline( cin , a[i].ten);
        getline(cin , a[i].nhom);
        cin >> a[i].mua >> a[i].ban;
        cin.ignore();
    }
}
void sapxep( Mh a[], int n)
{
    for( int i=0; i< n-1;i++)
    {
        a[i].loinhuan = a[i].ban - a[i].mua;
        for( int j = i+1; j< n; j++)
        {     a[j].loinhuan = a[j].ban - a[j].mua;
            if( a[i].loinhuan < a[j].loinhuan)
            swap (a[i], a[j]);
        }
    }
}
void in( Mh a[], int n)
{
    for( int i=0; i< n; i++)
    {   a[i].loinhuan = a[i].ban  - a[i].mua;
        cout << a[i].ma << " " << a[i].ten << " " << a[i].nhom <<" " <<  fixed << setprecision(2) << a[i].loinhuan<< endl;
    }
}
main()
{   Mh a[50];
    int n;
    cin >> n;
    nhap(a, n);
    sapxep(a, n);
    in(a, n);
    return 0;
    
}
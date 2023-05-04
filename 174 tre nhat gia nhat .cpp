#include<bits/stdc++.h>
using namespace std;
struct nguoi
{
    string ten, ns;
    int n, t, ng;

};
int z=0;
void nhap(nguoi ds[], int n)
{
    if(z==0) cin.ignore();
    z++;
    for( int i= 0; i< n; i++)
    {
        cin >> ds[i].ten >> ds[i].ns;
        cin.ignore();
        ds[i].n = 1000 * (ds[i].ns[6] - '0') + 100 * (ds[i].ns[7] - '0') + 10 * (ds[i].ns[8] - '0')+ ds[i].ns[9] - '0';
        ds[i].t = 10 * (ds[i].ns[3] - '0') + ds[i].ns[4] - '0';
        ds[i].ng= 10 * (ds[i].ns[0] - '0') + ds[i].ns[1] - '0';
    }
}
bool cmp( nguoi a, nguoi b)
{
    if( a.n < b.n) return true;
    if( a.n == b.n && a.t < b.t) return true;
    if(a.n == b.n && a.t == b.t && a.ng < b.ng) return true;
    return false;
}
void sapxep( nguoi ds[], int n)
{
    sort( ds, ds+ n , cmp);
}
void in(nguoi ds[], int n)
{
    cout << ds[n-1].ten <<endl;
    cout << ds[0].ten << endl;
}
int main()
{
    int n;
    cin >> n;
  
    struct nguoi ds[100];
    nhap(ds, n);
    sapxep( ds, n);
    in(ds, n);
    return 0;


}


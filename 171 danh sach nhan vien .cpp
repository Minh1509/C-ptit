#include<bits/stdc++.h>
#include<cctype>
#include<algorithm>
#include<cstring>

using namespace std;
struct NhanVien 
{
    string ma, hoten , gt, ns, dc, ms, nk;
    int ngay , thang , nam;
};
int z=0;

void nhap(NhanVien &a)
{   if( z==0) cin.ignore();
z++;
   getline( cin , a.hoten);
   getline(cin , a.gt);
   getline(cin , a.ns);
   getline(cin , a.dc);
   getline(cin , a.ms);
   getline( cin , a.nk);
   a.nam = 1000 * (a.ns[6] - '0') + 100 * (a.ns[7] - '0') + 10 * ( a.ns[8] - '0') + a.ns[9] - '0';
   a.thang = 10 * ( a.ns[0] - '0') + a.ns[1] - '0';
   a.ngay = 10 * ( a.ns[3] - '0') + a.ns[4] - '0';

}
bool cmp ( NhanVien a, NhanVien b)
{
    if(a.nam < b.nam) return true;
    if(a.nam == b.nam && a.thang < b.thang) return true;
    if( a.nam == b.nam && a.thang == b.thang && a.ngay < b.ngay ) return true;
    return false;
}
 
void sapxep( NhanVien ds[], int n)
{
    for( int i=0; i< n; i++)
    {
        if( i < 9) ds[i].ma = "0000" + to_string ( i+1);
        else ds[i].ma= "000" + to_string ( i+1);
    }
    sort(ds, ds+n, cmp);
}
void inds(NhanVien ds[], int n)
{
    for( int i=0; i<n; i++)
    {
        cout << ds[i].ma << " " << ds[i].hoten << " " << ds[i].gt << " ";
        cout << ds[i].ns << " " << ds[i].dc << " " << ds[i].ms << " " << ds[i].nk << endl;
    }
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
struct SinhVien
{
    string ma, hoten, lop;
    double d1, d2, d3;
};
int z=0;
void nhap(SinhVien &a){
   if(z==0) cin.ignore();
   z++;

    getline(cin , a.ma);
    getline(cin , a.hoten);
    getline(cin , a.lop);
    cin >> a.d1  >> a.d2 >> a.d3 ;
    cin.ignore();
}
bool cmp(SinhVien a, SinhVien b)
{
    if( a.hoten < b.hoten) return true;
    return false;
}
void sap_xep(SinhVien ds[], int n)
{
    sort ( ds, ds+n, cmp);
}
void in_ds( SinhVien ds[], int n)
{
    for( int i=0; i < n; i++)
    {   
        cout << i+1 << " "  << ds[i].ma << " " << ds[i].hoten << " " << ds[i].lop << " " <<fixed << setprecision(1) << ds[i].d1 << " " << fixed << setprecision(1)<< ds[i].d2 << " "<< fixed <<setprecision(1) << ds[i].d3 << endl; 
    }
}
int main(){
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}

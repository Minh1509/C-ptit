#include<bits/stdc++.h>
using namespace std;
class NhanVien
{
    private:
        string ma, hoten , gt, ns, dc, ms, nk;
      
    public :
          int n, t, ng;
        NhanVien();
        friend istream& operator >> (istream&, NhanVien&);
        friend ostream& operator << (ostream&, NhanVien);
        
        
};
NhanVien:: NhanVien()
{
    
}
int z =0, cnt=0;
istream& operator >> ( istream& in, NhanVien &a)
{
    if( z==0) cin.ignore();
    z++;
    ++cnt;
    a.ma = "";
    a.ma = a.ma + to_string(cnt);
    while ( a.ma.size() <5) a.ma = '0' + a.ma;
    getline( in , a.hoten);
    getline( in , a.gt);
    getline( in , a.ns);
    getline( in , a.dc);
    getline( in , a.ms);
    getline( in , a.nk);
    a.n = 1000* (a.ns[6] - '0') + 100*(a.ns[7] - '0') + 10 * (a.ns[8] - '0') + a.ns[9] - '0';
    a.t = 10 * (a.ns[0] - '0') + a.ns[1] - '0';
    a.ng= 10 * (a.ns[3] - '0') + a.ns[4] - '0';
    return in;


}
ostream& operator << ( ostream& out , NhanVien a)
{
    out << a.ma << " ";
    out << a.hoten << " ";
    out << a.gt << " ";
    out << a.ns << " ";
    out << a.dc << " ";
    out << a.ms << " ";
     out << a.nk <<endl;
     return out;
}
bool cmp(NhanVien a, NhanVien b)
{
    if(a.n < b.n) return true;
    if( a.n == b .n && a.t < b.t) return true;
    if(a.n == b.n && a.t == b.t && a.ng < b.ng) return true;
    return false;
}
void sapxep( NhanVien ds[], int n)

{
    sort( ds, ds+n, cmp);
}
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}
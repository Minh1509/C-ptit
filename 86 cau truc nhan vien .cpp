#include<bits/stdc++.h>
using namespace std;
struct NhanVien
{
    string ma = "00001", hoten ,gt,  ns, dc, nk, sdt;

};
void nhap(NhanVien &a)
{
    getline( cin, a.hoten);
    getline( cin, a.gt);
    getline( cin, a.ns);
    if( a.ns[1] == '/')
    {
        a. ns = " 0" + a.ns;
    }
    if(a. ns[4] == '/')
    {
        a.ns.insert(3, "0");
    }
    getline ( cin , a.dc);
    getline(cin, a.sdt);
    getline(cin, a.nk);
    if( a.nk[1] == '/')
    {
        a. nk = " 0" + a.ns;
    }
    if(a. nk[4] == '/')
    {
        a.nk.insert(3, "0");
    }
}
void in( NhanVien & a)
{
    cout<< a.ma << " " << a.hoten << " " << a.gt << " "<< a.ns << " " << a.dc << " "<< a.sdt << " " << a.nk;
}

int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}


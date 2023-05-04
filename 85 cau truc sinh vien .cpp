#include<bits/stdc++.h>
using namespace std;
struct SinhVien
{
    string ma = "B20DCCN001", hoten , lop, ns;
    float gpa;
};
void nhap( SinhVien & a)
{
    getline(cin , a.hoten);
    getline( cin , a. lop);

    cin >> a.ns;
    if( a.ns[1] == '/')
    {
        a.ns = "0" + a.ns;
    }
    if(a. ns[4] == '/')
    {
        a.ns.insert(3, "0");
    }
    cin >>a.gpa;

}
void in( SinhVien &a)
{
    cout << a.ma <<" "<< a.hoten << " "<< a.lop << " " << a. ns << " " << setprecision(2) << fixed << a.gpa;
}
int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}
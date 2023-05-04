#include<bits/stdc++.h>
using namespace std;
class SinhVien
{
    private :
        string ma, hoten , lop, ns;
        float gpa;
    public :
        SinhVien ();
        friend istream& operator >> (istream&, SinhVien&);
        friend ostream& operator << (ostream& , SinhVien );
};
SinhVien :: SinhVien ()
{
    this -> ma = ma;
    this -> hoten= hoten;
    this -> lop = lop;
    this -> ns = ns;
    this -> gpa = gpa;

}
istream& operator >>( istream& in , SinhVien &a)
{
    a.ma = "B20DCCN001";
    getline( in , a.hoten);
    getline( in , a.lop);
    getline(in , a.ns );
    if( a.ns[1] == '/') a.ns = '0'+ a.ns;
    if( a.ns[4] == '/') a.ns.insert(3, "0");
    in >> a.gpa;
    in.ignore();
    return in;


}
ostream& operator << ( ostream& out , SinhVien a)
{
    out << a.ma << " " << a.hoten << " " << a.lop << " " << a.ns <<" " << fixed << setprecision(2) << a.gpa << endl;
    return out;
}
int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}
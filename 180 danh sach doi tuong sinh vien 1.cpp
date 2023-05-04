#include<bits/stdc++.h>
using namespace std;
class SinhVien 
{
    private :
        string ma, hoten, lop, ns;
        float gpa;
       
    public :
        SinhVien();
        friend istream& operator >> ( istream &, SinhVien&);
        friend ostream& operator << ( ostream&, SinhVien);

};
SinhVien :: SinhVien()
{
    this -> ma = ma;
    this -> hoten = hoten ;
    this -> lop= lop;
    this -> ns = ns;
    this -> gpa = gpa;
}
int tmp =0;
int x=0;
istream& operator >>(istream& in, SinhVien &a)
{   ++tmp;
    if(x==0) cin.ignore();
    x++;
    a.ma = "";
    string cnt = to_string(tmp);
    a.ma += cnt;
    while (a.ma.size() <3)
    {
        a.ma = '0'+ a.ma;
    }
    a.ma = "B20DCCN" + a.ma;
   
    getline( in , a.hoten);
    in >> a.lop >> a.ns >> a.gpa;
    if( a.ns[1] == '/') a.ns = '0' + a.ns;
    if( a.ns[4] == '/') a.ns.insert(3, "0");
    cin.ignore();
    return in;
}
ostream& operator << (ostream& out , SinhVien a)
{
    out << a.ma << " " << a.hoten << " " << a.lop << " " << a.ns <<" " << fixed<< setprecision(2) << a.gpa << endl;
    return out;
}
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
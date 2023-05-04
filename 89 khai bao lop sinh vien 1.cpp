#include<bits/stdc++.h>
using namespace std;
class SinhVien
{
    private :
        string ma;
        string hoten , lop, ns;
        float gpa;
    public :
        SinhVien ();
        void nhap();
        void xuat ();
       
};
SinhVien :: SinhVien()
{

}
void SinhVien :: nhap()
{
            ma= "B20DCCN001";
            getline( cin , hoten);
            getline( cin , lop);
            getline( cin , ns);
            if( ns[1] == '/') ns = '0' + ns;
            if( ns[4] == '/') ns.insert( 3, "0");
            cin >> gpa;
            cin .ignore();
}
void SinhVien :: xuat()
 {
            cout << ma << " " << hoten << " " << lop << " " << ns << " " << fixed << setprecision(2) << gpa << endl;
        }
int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}
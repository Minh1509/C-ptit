#include<bits/stdc++.h>
using namespace std;
void chuanhoa( string &s)
{   for( int i=0; i< s.size(); i++) s[i] = tolower(s[i]);
    vector < string > v;
    string tmp;
    stringstream ss(s);
    while( ss >> tmp)
    {
        v.push_back((tmp));
    }
    for( int i=0; i< v.size(); i++)
    {
        v[i][0] = toupper(v[i][0]);   
    }
    for( int i=0; i< v.size(); i++) cout << v[i] << " ";
}
class SinhVien
{
    private :
        string ma, ten , lop, ns;
        float gpa;
    public :
        SinhVien ()
        {
            ma= ten = lop= ns = "";
            gpa =0;
        }
        friend istream& operator >> (istream&, SinhVien& );
        friend ostream& operator << (ostream& , SinhVien);

};
istream& operator >> (istream& in , SinhVien &a)
{
    a.ma = "B20DCCN001";
    getline( in , a.ten);
    
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
    out << a.ma << " " ;
     chuanhoa(a.ten);
     out  << " " << a.lop << " " << a.ns <<" " << fixed << setprecision(2) << a.gpa << endl;
    return out;
}
int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}
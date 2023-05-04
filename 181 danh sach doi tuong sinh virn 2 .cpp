#include<bits/stdc++.h>
using namespace std;
void chuanhoa(string &s)
{
    for( int i=0; i< s.size(); i++) s[i] = tolower(s[i]);
    stringstream ss(s);
    string tmp;
    vector<string > v;
    while( ss>> tmp)
    v.push_back(tmp);
    for( int i=0; i< v.size(); i++) v[i][0] = toupper(v[i][0]);
    for( int i=0; i< v.size(); i++) cout << v[i] << " ";
}
int z=0, cnt=0;
class SinhVien
{
    private :
        string ma, hoten , lop, ns;
        float gpa;
    public:
        SinhVien();
        friend istream& operator >> (istream& , SinhVien& );
        
        friend ostream &operator << (ostream& , SinhVien );
        
};
SinhVien :: SinhVien ()
{

}
istream& operator >> (istream& in, SinhVien& a)
        {
            if( z==0) cin.ignore();
            z++;
            ++cnt;
            a.ma = "";
            string tmp;
            tmp = to_string (cnt);
            a.ma += tmp;
            while( a.ma.size() < 3)
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
ostream &operator << (ostream& out, SinhVien a)
        {
            out << a.ma << " ";
            chuanhoa(a.hoten);
            out << a.lop << " " << a.ns <<" " << fixed<< setprecision(2) << a.gpa << endl;
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
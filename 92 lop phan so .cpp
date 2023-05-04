#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll gcd( ll a, ll b)
{
    if( b == 0) return a;
    else return gcd( b, a % b);
}
ll lcm( ll a, ll b)
{
    return a * b / gcd( a,b);
}
class PhanSo
{
    private :
         ll tu , mau;
    public :
        PhanSo(ll tu, ll mau);
        friend ostream& operator << (ostream&, PhanSo); // out 
        friend istream& operator >> (istream&, PhanSo&);    // in
        void rutgon();

};
PhanSo :: PhanSo( ll tu, ll mau)
{
    this -> tu = tu;
    this ->mau = mau;
}
// in phan so
ostream& operator << (ostream& out , PhanSo a)
{
    out << a.tu<< "/" << a.mau << endl;
    return out;
}
// nhap phan so
istream& operator >> (istream& in, PhanSo &a)
{
    in >> a.tu >> a.mau ;
    return in;
}
void PhanSo :: rutgon()
{
    ll g = gcd( tu , mau);
    tu = tu /g;
    mau = mau /g;
}
int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}
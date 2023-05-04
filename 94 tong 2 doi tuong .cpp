#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd( ll a, ll b)
{
    if( b==0) return a;
    else return gcd( b , a % b);
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
        PhanSo (ll tu , ll mau);
        friend istream& operator >> (istream& , PhanSo&);
        friend ostream & operator << (ostream& , PhanSo);
        friend PhanSo operator+ (PhanSo , PhanSo);
};
PhanSo :: PhanSo( ll tu , ll mau)
{
    this ->tu = tu;
    this -> mau = mau;
}
istream& operator >> ( istream & in , PhanSo &a)
{
    in >> a.tu >> a.mau;
    return in;
}

ostream& operator << (ostream & out , PhanSo a)
{
    out << a.tu <<"/"  << a.mau << endl;
    return out ;
}
PhanSo operator +(PhanSo a, PhanSo b)
{   PhanSo tong(1,1);
    ll k= lcm ( a.mau , b.mau);
    tong.tu = a.tu * (k / a.mau)  + b.tu * ( k / b.mau);
    tong.mau = k;
    // rugon tong
    ll x= gcd( tong.tu , tong.mau);
    tong.tu  /= x;
    tong.mau /= x;
    return tong;
}
int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}
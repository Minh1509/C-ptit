#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd( ll a, ll b)
{
    if( b ==0) return a;
    else return gcd( b , a % b);
}
ll lcm( ll a, ll b)
{
    return a * b / gcd( a,b);
}



struct PhanSo
{
    ll tu , mau;
};
void rutgon(PhanSo &a)
{
    ll k = gcd( a.tu , a.mau);
    a.tu /= k;
    a.mau /= k;
}
void process(PhanSo a, PhanSo b)
{
    PhanSo tong;
    ll k = lcm(a.mau, b.mau);
    tong.tu = a.tu * (k / a.mau) + b.tu * ( k / b.mau);
    tong.mau = k;
    tong.tu *= tong.tu;
    tong.mau *= tong.mau; 
    rutgon(tong);
    PhanSo tich;
    tich.tu = a.tu * b.tu * tong.tu;
    tich.mau = a.mau * b.mau * tong.mau;
    rutgon(tich);
    cout << tong.tu << "/" << tong.mau << " " << tich .tu << "/" << tich.mau << endl;

}
int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}

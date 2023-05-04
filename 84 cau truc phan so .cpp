#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd(ll a, ll b)
{
    if(b==0) return a;
    else return gcd( b , a% b);

}
ll lcm( ll a, ll b)
{
    return a * b / gcd( a, b);
}

struct PhanSo
{
    ll tu, mau;
};
void nhap( PhanSo &a)
{
    cin >> a.tu >> a.mau;
}
void rutgon( PhanSo &a)
{
    ll k= gcd( a.tu, a.mau);
    a.tu= a.tu / k;
    a.mau = a.mau / k;
    
}
void in( PhanSo &a)
{
    cout<< a.tu << "/" << a.mau;
}
int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}

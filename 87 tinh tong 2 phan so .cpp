#include <bits/stdc++.h>

using namespace std;

struct PhanSo
{
    long long tu, mau;
};

void nhap(PhanSo &p)
{
    cin >> p.tu >> p.mau;
}

void in(PhanSo &p)
{
    cout << p.tu << "/" << p.mau;
}

void rutgon(PhanSo &p)
{
    long long uc = __gcd(p.tu, p.mau);
    p.tu /= uc;
    p.mau /= uc;
}

long long __lcm(long long a, long long b)
{
    long long uc = __gcd(a,b);
    return a * b / uc;
}

void quydong(PhanSo &p, PhanSo &q)
{
    long long bc = __lcm(p.mau, q.mau);
    long long x = bc / p.mau;
    long long y = bc / q.mau;
    p.tu *= x;
    q.tu *= y;
    p.mau = bc;
    q.mau = bc;
}

struct PhanSo tong(PhanSo p, PhanSo q)
{
    struct PhanSo t;
    quydong(p,q);
    t.tu = p.tu + q.tu;
    t.mau = p.mau;
    rutgon(t);
    return t;
}

int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}
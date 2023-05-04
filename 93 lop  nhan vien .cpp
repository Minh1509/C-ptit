#include <iostream>
#include <algorithm>
#include <string>
#include <iomanip>

using namespace std;

class NhanVien
{
private:
	string mnv, ten, gt, ns, dc, mst, ngay;
public:
	void nhap();
	void xuat();
};

void Chuanhoangay(string& ngay)
{
	if (ngay[1] == '/') ngay = "0" + ngay;
	if (ngay[4] == '/') ngay.insert(3, "0");
}

void NhanVien::nhap()
{
	mnv = "00001";
	getline(cin, ten);
	cin >> gt >> ns;
	cin.ignore();
	getline(cin, dc);
	cin >> mst >> ngay;
	Chuanhoangay(ns);
	Chuanhoangay(ngay);
}

void NhanVien::xuat()
{
	cout << mnv << " " << ten << " " << gt << " " << ns << " " << dc << " " << mst << " " << ngay;
}

int main(){
    NhanVien a;
    a.nhap();
    a.xuat();
    return 0;
}
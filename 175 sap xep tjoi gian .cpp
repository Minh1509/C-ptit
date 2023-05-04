#include<bits/stdc++.h>
using namespace std;
struct x
{
	int gio, phut, giay;
};
void nhap( x ds[], int n)
{
	for( int i = 0; i< n; i++)
	{
		cin >> ds[i].gio >> ds[i].phut >> ds[i].giay;
	}
}
bool cmp(x a, x b)
{
	if( a.gio < b.gio ) return true;
	if( a.gio == b.gio && a.phut < b.phut ) return true;
	if( a.gio == b.gio && a.phut == b.phut && a.giay < b.giay ) return true;
	return false;
}
void sapxep( x ds[], int n)
{
	sort( ds, ds+ n, cmp);
}
void in(x ds[], int n)
{
	for( int i = 0; i< n; i++)
	{
		cout << ds[i].gio << " " << ds[i].phut << " " << ds[i].giay << endl;
	}
}
main()
{
	int n;
	cin >> n;
	x ds[n];
	nhap(ds, n);
	sapxep( ds, n);
	in(ds, n);
	return 0;
}
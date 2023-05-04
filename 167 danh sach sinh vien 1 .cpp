#include<bits/stdc++.h>
using namespace std;
struct SinhVien
{
    string hoten, lop, ns;
    float gpa;
};
int z=0;
void nhap(SinhVien ds[], int n)
{   if(z==0) cin.ignore();
    z++;
    for ( int i=0; i< n; i++)
    {
        getline( cin, ds[i].hoten);
        getline(cin, ds[i].lop);
        getline(cin, ds[i].ns);
        if( ds[i].ns[1] == '/')
        {
            ds[i].ns= '0'+ ds[i].ns ;
        }
        if(ds[i].ns[4] == '/')
        {
            ds[i].ns.insert(3, "0");
        }
        cin >> ds[i].gpa;
        cin.ignore();
    }
}
void in(SinhVien ds[], int n)
{
    for( int i=0; i< n; i++)
    {
        string msv;
        if(i < 9) msv = "B20DCCN00";
        else msv = "B20DCCN0";
        cout << msv << i+1 << " " << ds[i].hoten << " " << ds[i].lop << " " << ds[i].ns << " " << fixed << setprecision(2) << ds[i].gpa << endl;
    }
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}
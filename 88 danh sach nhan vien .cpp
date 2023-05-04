#include<bits/stdc++.h>
using namespace std;

struct NhanVien
{
    string hoten, gt, ns, dc, ms, nk;
};
int z=0;
void nhap(NhanVien &a)
{   if(z==0) 

    cin.ignore();
    z++;

    getline (cin , a.hoten);
    getline(cin, a. gt);
    getline(cin , a.ns);
    getline (cin, a.dc);
    getline(cin, a.ms);
    getline(cin, a.nk);
}
void inds(NhanVien ds[], int n)
{
    for( int i=0; i< n; i++)
    {
        string ma;
        if(i < 9)
        {
            ma= "0000" ;
        }
        else{
            ma= "000" ;
        }
        cout << ma << i+1 << " " << ds[i].hoten << " " << ds[i].gt << " " << ds[i].ns << " " << ds[i].dc << " " << ds[i].ms << " " << ds[i].nk << endl;
    }
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}
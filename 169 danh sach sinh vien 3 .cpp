#include<bits/stdc++.h>
using namespace std;
void chuanhoa( string s)
{
    for( int i=0; i <s.size(); i++)
    s[i] = tolower(s[i]);
    stringstream ss(s);
    string tmp;
    vector< string > v;
    while( ss >> tmp) v.push_back( tmp);
    for( int i=0; i < v.size(); i++) v[i][0] = toupper(v[i][0]);
    for( int i=0; i< v.size(); i++) cout << v[i] << " ";
}
struct SinhVien
{
    string hoten, lop, ns , ma;
    float gpa;
};
int z =0;
void nhap(SinhVien ds[], int n)
{
    if( z ==0) cin.ignore();
    z++;
    for( int i=0 ; i< n; i++)
    { 
        if( i < 9) ds[i].ma = "B20DCCN00" + to_string(i+1);
        else ds[i].ma = "B20DCCN0"+ to_string(i+1);
        
        getline( cin , ds[i].hoten);
        getline( cin, ds[i].lop);
        getline(cin , ds[i].ns);
        if( ds[i].ns[1] == '/') ds[i].ns= '0'+ ds[i].ns;
        if( ds[i].ns[4] == '/') ds[i].ns.insert(3, "0");
        cin >> ds[i].gpa;
        cin.ignore();
    }
}

void sapxep(SinhVien ds[], int n)
{
    for( int i=0; i < n-1; i++)
    {
        for( int j= i+1; j< n; j++)
        {
            if(ds[i].gpa < ds[j].gpa) swap(ds[i], ds[j]);
        }
    }
}
void in(SinhVien ds[], int n)
{
    for( int i=0 ; i< n; i++)
    {
        cout <<ds[i].ma<< " ";
        chuanhoa( ds[i].hoten);
        cout << ds[i].lop << " " << ds[i].ns <<" "<< fixed << setprecision(2) << ds[i].gpa << endl;
    }
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}
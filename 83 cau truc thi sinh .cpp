#include<bits/stdc++.h>
using namespace std;
struct ThiSinh
{
    string hoten, ns;
    float d1, d2, d3, sum;
};
void nhap(ThiSinh &a)
{
    getline(cin, a.hoten);
    cin >> a.ns;
   
    cin >> a.d1 >> a.d2 >> a.d3;
}
void in(ThiSinh &a)
{   a.sum = a.d1+ a.d2 + a.d3;
    cout<<a.hoten<< " " <<a.ns << " " << setprecision(1)<<fixed << a.sum <<endl;
}
int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
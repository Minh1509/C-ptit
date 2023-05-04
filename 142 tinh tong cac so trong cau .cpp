#include<bits/stdc++.h> 
using namespace std; 
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        string s;
        cin >> s;
        for( char &x : s)
        {
            if(isalpha(x)) x= ' ';
        }
        stringstream ss(s);
        string tmp;
        long long sum=0;
        while(ss>> tmp)
        {
            long long x= stoll(tmp);
            sum += x;
        }
        cout << sum << endl;
    }
}

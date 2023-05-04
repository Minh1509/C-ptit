#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int a[n];
		for( int i=0; i<n; i++) cin>>a[i];
		int i=0;
		for(; i<n; i++)
		{
		
		if(a[i] ==k)
		{
			cout<<"1\n";
			break;
		}
			
			}
			if( i==n) cout<<"-1\n";
	}
}

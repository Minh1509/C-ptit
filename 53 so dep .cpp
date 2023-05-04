#include<iostream>
#include<string.h>
using namespace std;
int nghich( char c[])
{
	int l=0, r= strlen(c)-1;
	while( l<r)
	
	{
		if(  c[l] !=c[r]) return 0;
		else 
	{
		l++;
		r--;
	}
	}
	
	return 1;
}
int chan( char c[])
{
	for( int i=0; i<strlen(c); i++)
	{
		if( (c[i] - '0') % 2 !=0) return 0;
	}
	return 1;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char c[505];
		cin>>c;
		if(nghich(c) && chan(c)) cout<<"YES\n";
		else cout<<"NO\n";
	}
}

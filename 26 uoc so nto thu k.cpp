#include<iostream>
#include<math.h>
using namespace std;
void ptich( long long n, int k)
{	int a=0, i=2;
	while( n !=1)
	{
		if( n % i==0)
		{
			a++;
			if( a ==k) cout <<i<<endl;
			else n /=i;
			
		}
		else i++;
		
		
	}
	if( k>a) cout<<"-1\n";
	
}
int main()
{
	int t;
	cin >>t;
	while( t--)
	{
		long long n;
		int k;
		cin>>n>>k;
		ptich(n,k);
	}
}



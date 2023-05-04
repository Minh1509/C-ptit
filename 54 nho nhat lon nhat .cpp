#include <iostream>
#include <string>

using namespace std;

void Maxnum(int m, int s)
{
	string max = "";
	int a[m] = {0};
	int i = 0;
	while (s > 0)
	{
		a[i]++;
		if (a[i] == 9) i++;
		s--;
	}
	for (int i = 0; i < m; i++)
	{
		max.push_back(a[i] + '0');
	}
	cout << max << endl;
}

void Minnum(int m, int s)
{
	string min = "";
	int a[m] = {0};
	int i = m - 1;
	a[0] = 1;
	s -= 1;
	while (s > 0)
	{
		a[i]++;
		if (a[i] == 9) i--;
		s--;
	}
	for (int i = 0; i < m; i++)
	{
		min.push_back(a[i] + '0');
	}
	cout << min << " ";
}

int main()
{
	int m,s;
	cin >> m >> s;
	if (9 * m < s || (m > 1 && s == 0))
	{
		cout << "-1 -1" << endl;
		return 0;
	}
	Minnum(m,s);
	Maxnum(m,s);
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
vector<int>p;
auto main()->int
{
	int s;
	cin >> s;
	p.resize(100,0);
	for (int i = 0; i != s; i++)
	{
		int n;
		cin >> n;
		p[n] = p[n] + 1;
	}
	for (int r = 0; r != p.size(); r++)
	{
		cout << p[r]<<" ";
	}
	return 0;
}

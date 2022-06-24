#include<bits/stdc++.h>
using namespace std;
vector<int>Pair;
auto main()->int
{
	int q;
	cin >> q;
	Pair.resize(100,0);
	for (int i = 0; i != q; i++)
	{
		int n;
		cin>>n;
		Pair[n]=Pair[n]+1;
	}
	for (int r=0;r!=Pair.size();r++)
	{
		for (int t=0;t!=Pair[r];t++)
		{
			cout<<r<< " ";
		}
	}
	return 0;
}
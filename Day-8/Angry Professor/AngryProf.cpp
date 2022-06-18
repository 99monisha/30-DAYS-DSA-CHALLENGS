#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a; cin >> a;
	for (int i=0; i<a; i++)
	{
		int b,c,count=0; 
        cin >> b >> c;
		 for (int i=0; i<b; i++)
		{
			int d; cin >> d;
			if (d<=0) 
            count++; 
		}
		if (count>=c)
		{
			cout << "NO" << endl; 
		}
		else 
        cout << "YES" << endl;
	}
	return 0; 
}

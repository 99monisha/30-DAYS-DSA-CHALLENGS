#include <bits/stdc++.h>
using namespace std;
int main()
{
 int q;
  cin>>q;
    while(q--)
    {
        int x, y, z;
      cin>>x>>y>>z;
        x=abs(x-z);
        y=abs(y-z);
        if(x==y)
            cout<<"Mouse C"<<endl;
        else if(x<y)
           cout<<"Cat A"<<endl;
        else
            cout<<"Cat B"<<endl;
    }
    return 0;
}
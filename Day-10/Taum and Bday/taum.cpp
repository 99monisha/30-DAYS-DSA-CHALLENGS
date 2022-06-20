#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t,i;
  long long b,w,bc,wc,z;
  cin>>t;
  for(i=0;i<t;i++)
  {
    cin>>b>>w;
    cin>>bc>>wc>>z;
    long long p1=b*bc+w*wc;
    long long p2=b*(wc+z)+w*wc;
    long long p3=b*bc+w*(bc+z);
    if(p1<p2 && p1<p3)
    cout<<p1<<endl;
    else if(p2<p1 && p2<p3)
    cout<<p2<<endl;
    else
    {
         cout<<p3<<endl;
    }

  }
 return 0;
}
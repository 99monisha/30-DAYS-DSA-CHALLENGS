#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,i,bread;cin>>n;
  int a[n];
  for(i=0;i<n;i++)
  cin>>a[i];
  for(i=0;i<n-1;i++)
  {
    if(a[i]%2!=0)
    {
        a[i]=a[i]+1;
        a[i+1]=a[i+1]+1;
        bread+=2;
    }
  }  

if(a[n-1]%2!=0)
cout<<"NO";
else{
    cout<<bread;
}
    return 0;
}
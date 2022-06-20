#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,i,j,x=0,k=0,y=0;
   cin>>n;
   int a[n];
   for(i=0;i<n;i++)
   cin>>a[i];
   for(i=0;i<n;i++)
   {
    x=a[i];
    for(j=0;j<n;j++)
    {
        if(a[i]==a[j])
        k++;
    }
    if(y<k)
    {
        y=k;

    }
    k=0;
   }
   cout<<(n-y);


    return 0;
}
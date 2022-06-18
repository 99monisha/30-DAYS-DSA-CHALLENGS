#include<iostream>
using namespace std;
int main(){
    int n,k,max=0,j,i;
    cin>>n>>k;
    int a[n];
    for(i=0;i<n;i++){
       cin>>a[i];
       if (max<a[i])
       max=a[i];
       }
       j=max-k;
       if (j<0)
       cout<<"0";
       else
       cout<<j;
       return 0;
       
}
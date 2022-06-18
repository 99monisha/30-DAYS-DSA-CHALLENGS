#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int main(){
int n,i,j,c=0,max=0;
cin>>n;
int a[n],b[n];
for(i=0;i<n;i++){
    cin>>a[i];
}
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        if(a[i]==a[j] || a[i+1]==a[j]){
            c++;
        }}
        b[i]=c;
        c=0;
    }
    max=b[0];
    for(i=1;i<n;i++)
    if (max<b[i])
    max=b[i];
    cout<<max;
  


    return 0;
}
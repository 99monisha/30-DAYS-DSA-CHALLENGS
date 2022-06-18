#include<bits/stdc++.h>
using namespace std;
long int rev(long int x){
    long int i,sum=0,mul=10;
    while(x!=0){
i=x%10;
sum=(sum*mul)+i;
x/=10;
    }
    return sum;
}
int main(){
    long int i,j,k,res=0,x,r;
    cin>>i>>j>>k;
    for(x=i;x<=j;x++){
        r=rev(x);
        if(abs(x-r)%k==0)
        res++;
    }
    cout<<res;
      return 0;
}
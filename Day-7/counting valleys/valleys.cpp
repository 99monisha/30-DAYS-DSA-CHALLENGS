#include<iostream>
#include<string.h>
using namespace std;
int main(){
           int n,i,x=0;
           cin>>n;
           int b[n];
           char a[n];
           cin>>a;
           for(i=0;i<n;i++){
if (a[i]=='U')
{
    x++;
    b[i]=x;
}
else{
    x=x-1;
      b[i]=x;

}
       }
           x=0;
           for(i=0;i<n;i++){
            if(b[i]<0 && b[i+1]==0)
            x++;
           }

cout<<x;

    return 0;
}
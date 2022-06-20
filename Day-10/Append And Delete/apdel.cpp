#include<bits/stdc++.h>
using namespace std;
int main(){
    char a[100],b[100];
    int k,i,x,y,p=0,q;
    cin>>a;
    cin>>b;
    cin>>k;
    x=strlen(a);
    y=strlen(b);
    if(x>y)
    q=x;
    else
    q=y;
    for(i=0;i<q;i++)
    {
        if(a[i]==b[i])
        p++;
        else{
        break;
        }
    }
    if(x+y<=k)
    cout<<"Yes";
    else if(k-(x+y-2*p)>=0)
    {
        if((k-(x+y-2*p))%2==0)
        cout<<"Yes";
        else{
        cout<<"No";
        }
    }
    else{
        cout<<"No";
    }



    return 0;
}
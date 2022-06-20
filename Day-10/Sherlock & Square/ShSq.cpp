#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,q,p=0;
    long long a,b;
    cin>>q;
    for(i=0;i<q;i++)
    {
        cin>>a>>b;
        for(j=sqrt(a);j<=sqrt(b);j++)
        {
            if((j*j)>=a && (j*j)<=b)
            p++;
        }
        cout<<p<<endl;
        p=0;
    }
    
    return 0;
}
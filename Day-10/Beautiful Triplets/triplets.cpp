#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,d,i,j,k,t=0;
    cin>>n>>d;
    int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[j]-a[i]==d)
            {
                for(k=j+1;k<n;k++)
                {
                    if(a[k]-a[j]==d)
                    {
                        t++;
                        break;
                    }
                }
            }
        }
    }
    cout<<t;


    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,j,p=1,s=0,m=1;
    cin>>n>>k;
    int a[n];
    for(i=1;i<=n;i++)
    cin>>a[i];
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=a[i];j++)
        {
            if(j<=m*k)
            {
                if(p==j)
                s++;
            }
            else
            {
                p++;
                if(p==j)
                s++;
                m++;
            }
        }
        p++;
        m=1;
    }

cout<<s;
    return 0;
}
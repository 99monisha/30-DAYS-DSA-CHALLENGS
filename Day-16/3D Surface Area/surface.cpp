#include<bits/stdc++.h>
using namespace std;
int main()
{    
    int i,j,h,w,sa=0;
    cin>>h>>w;
    int a[h+2][w+2];
    for(i=0;i<h+2;i++)
    {
        for(j=0;j<w+2;j++)
        a[i][j]=0;
    }
    for(i=1;i<h+1;i++)
    for(j=1;j<w+1;j++)
    cin>>a[i][j];
    sa=2*w*h;
    for(i=1;i<h+1;i++)
    {
        for(j=1;j<w+1;j++)
        {
            if(a[i][j]>a[i-1][j])
            sa+=(a[i][j]-a[i-1][j]);

             if(a[i][j]>a[i+1][j])
            sa+=(a[i][j]-a[i+1][j]);

             if(a[i][j]>a[i][j+1])
            sa+=(a[i][j]-a[i][j+1]);

             if(a[i][j]>a[i][j-1])
            sa+=(a[i][j]-a[i][j-1]);
        }
    }
cout<<sa;

    return 0;
}
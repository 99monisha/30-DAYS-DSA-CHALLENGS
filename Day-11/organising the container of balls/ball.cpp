#include<bits/stdc++.h>
using namespace std;
int main()
{
   int q,n,i,j,k,p=0;
   cin>>q;
   for(k=0;k<q;k++)
   {
    cin>>n;
    int a[n][n],space[n],ball[n];
    for(i=0;i<n;i++)
    {
        space[i]=0;
        ball[i]=0;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        space[i]=space[i]+a[i][j];
        ball[i]=ball[i]+a[j][i];
    }
}
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        if(space[i]==ball[j])
        {
            ball[j]=0;
            space[i]=0;
            p=1;
            break;
        }
        else{
            p=-1;
        }
    }
    if(p==-1)
    {
        break;
    }
}
if(p==-1)
cout<<"Impossible"<<endl;
elsecout<<"Possible"<<endl;
}



    return 0;
}
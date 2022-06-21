#include<bits/stdc++.h>
using namespace std;
int main()
{
   char s[100],a[100][100];
   int i,j,k,p=0,l;
   cin>>s;
   for(i=0;s[i]!='\0';i++)
   {
    if(s[i]==' ')
    {
        for(j=i;s[j]!='\0';j++)
        s[j]=s[j+1];
    }
   }
l=strlen(s);
p=sqrt(l);
k=0;
if(p*p==l)
{
    for(i=0;i<p;i++)
    {
        for(j=0;j<p;j++,k++)
        {
            a[i][j]=s[k];
        }
    }
}
else if(p*p+1>=l)
{
    for(i=0;i<p;i++)
    {
        for(j=0;j<p+1;j++,k++)
        a[i][j]=s[k];

    }
}

else{
    for(i=0;i<p+1;i++)
    {
        for(j=0;j<p+1;j++,k++)
        a[i][j]=s[k];
    }
}
for(i=0;i<=p;i++)
{
    for(j=0;j<=p;j++)
    {
        if(a[j][i]!='\0')
        cout<<a[j][i];
    }
    cout<<" ";
}
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{  
    int ans=0,i,j,n;
    char s[100],a[3];
    cin>>s;
    n=strlen(s);
    for(i=0;i<n;i=i+3)
    {
    if(s[i]!='S')
    ans++;
    if(s[i+1]!='O')
    ans++;
    if(s[i+2]!='S')
    ans++;
   }
   cout<<ans;

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q,i,j,ans=0;
    cin>>q;
    char s[100000];
    for(j=0;j<q;j++)
    {
        ans=0;
        cin>>s;
        n=strlen(s);
        for(i=0;i<n-1;i++)
        {
            if(s[i]==s[i+1])
            ans++;
        }
          cout<<ans<<endl;
}
   return 0;
}
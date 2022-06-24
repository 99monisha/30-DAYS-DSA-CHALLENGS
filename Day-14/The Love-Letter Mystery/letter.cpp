#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    int i,j,k,n,q,ans=0;
    cin>>q;
    char s[10000];
    for(k=0;k<q;k++)
    {
        ans=0;
        cin>>s;
        n=strlen(s);
        for(i=0,j=n-1;i<n/2;i++,j--)
        ans+=abs(s[i]-s[j]);
        cout<<ans<<endl;
    }
    return 0;
}
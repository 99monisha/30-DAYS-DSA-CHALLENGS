#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,n;
    cin>>n;
    for(k=0;k<n;k++)
    {
        char s[100001];
        int a[26]={0},ans=0;
        cin>>s;
        for(i=0;s[i]!='\0';i++)
        a[s[i]-'a']=1;
        for(i=0;i<26;i++)
        {
            if(a[i]==1)
            ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
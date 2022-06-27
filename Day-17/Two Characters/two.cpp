#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int len,i,j,k=0,l,f=0,m=1,n=1,res=0,ans;
    cin>>len;
    char s[len],a[26];
    cin>>s;
    for(i=0;s[i]!='\0';i++)
    {
        for(j=k;j>=0;j--)
        {
            if(s[i]==a[j])
            {
                f=0;
                break;
            }
            else
            f=1;
        }
        if(f==1)
        {
            a[k]=s[i];
            k++;
        }
    }
    for(i=0;i<=k;i++)
    {
        for(j=i+1;j<=k;j++)
        {
            for(l=0;s[l]!='\0';l++)
            {
                if(a[i]==s[l] && n==1)
                {
                    res++;
                    n=0;
                    m=1;
                }
                else if(a[i]==s[l])
                {
                    res=0;
                    break;
                }
                else if(a[j]==s[l] && m==1)
                {
                    res++;
                    m=0;n=1;
                }
                else if(a[j]==s[l])
                {
                    res=0;
                    break;
                }
            }
            if(res>ans)
            ans=res;
            res=0;
            m=n=1;
        }
    }
   if(ans==1)
   cout<<"0";
   else
   cout<<ans;
    return 0;
}
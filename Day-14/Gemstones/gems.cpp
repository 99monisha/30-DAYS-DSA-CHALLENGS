#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    int i,j,gem=0,f=0,n;
    cin>>n;
    char s[n][100];
    int a[n][26];
    for(i=0;i<n;i++)
    {
        cin>>s[i];
        for(j=0;s[i][j]!='\0';j++)
        {
            a[i][s[i][j]-97]=1;
        }
    }
    for(j=0;j<26;j++)
    {
        for(i=0;i<n;i++)
        {
            if(a[i][j]==1)
            f=1;
            else
            {
                f=0;
                break;
            }
        }
        if(f==1)
        gem++;
    }
    cout<<gem;
    return 0;
}
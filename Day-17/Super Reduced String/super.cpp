#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    int i,n,j;
    char s[100];
    cin>>s;
    n=strlen(s);
    for(i=0;i<n;i++)
    {
        if(s[i]==s[i+1])
        {
           for(j=i;s[j]!='\0';j++)
           {
            s[j]=s[j+2];

           }
           i=i-2;
           if(i<0)
           i=-1;
           n=strlen(s);
        }
    }
    if(strlen(s)==0)
    cout<<"Empty String";
    else
   {
     cout<<s;
   }
    return 0;
}
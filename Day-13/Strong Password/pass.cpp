#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,lower=0,upper=0,special=0,digit=0,more=0;
    cin>>n;
    char s[n];
    cin>>s;
    for(i=0;i<n;i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        upper=1;
         else if(s[i]>='a' && s[i]<='z')
         lower=1;
           else if(s[i]>='0' && s[i]<='9')
           digit=1;
           else
           special=1;

    }
    if(special==0)
    more++;
    if(lower==0)
    more++;
    if(upper==0)
    more++;
    if(digit==0)
    more++;

    if(n<6)
    {
        if(6-n>more)
        cout<<6-n;
        else
        cout<<more;
    }
    else
    cout<<more;
    return 0;
}
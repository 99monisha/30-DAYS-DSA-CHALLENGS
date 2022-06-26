#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int i=0,j=0,fact[20000],mul=0,len=0,n=0,carry=0;

    fact[0]=1;
    len=1;
 
   cin>>n;
    for(i=2;i<=n;i++)
     {
       for(j=0;j<len;j++)
        {
            mul=carry+i*fact[j];
         fact[j]=mul%10;
         carry=mul/10;
        }
        while(carry>0)
         {
            fact[len++]=carry%10;
            carry=carry/10;
         }
     }
     for(i=len-1;i>-1;i--)
     cout<<fact[i];

   
    return 0;
}
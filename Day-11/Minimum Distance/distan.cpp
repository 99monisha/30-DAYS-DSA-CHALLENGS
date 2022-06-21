#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,p=0,min=0,k;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
     for(i=0;i<n;i++)
     {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                k=j-i;
                if(p==0)
                {
                    min=k;
                    p=1;
                }
                if(min>k)
                {
                    min=k;
                }
            }
        }
     }
     if(min==0)
     cout<<"-1";
     else{
        cout<<min;
     }

    return 0;
}
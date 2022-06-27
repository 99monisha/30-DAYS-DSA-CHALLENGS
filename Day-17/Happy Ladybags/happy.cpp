#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,n,i,j,k;
    cin>>g;
    for(k=0;k<g;k++)
    {
        int p=1,q=0;
        cin>>n;
        char a[n],b,temp;
        cin>>a;
        for(i=0;i<n;i++)
        {
            if((a[i]==a[i+1] || a[i]==a[i-1]) && p==1)
            p=1;
            else
            p=0;
            if(a[i]=='_')
            q=1;
        }
        if(p==1)
        cout<<"YES"<<endl;
        else if(p==0 && q==0)
        cout<<"NO"<<endl;
        else if(p==0 && q==1)
        {
            for(i=0;i<n-1;i++)
            {
                for(j=0;j<n-1;j++)
                {
                    if(a[j]>a[j+1])
                    {
                        temp=a[j];
                        a[j]=a[j+1];
                        a[j+1]=temp;
                    }
                }
            }
            p=0;
            for(i=0;i<n;i++)
            {
                if(a[i]==a[i+1] || a[i]==a[i-1] || a[i]=='_')
                p=1;
                else
                {
                    p=0;
                    break;
                }
            }
            if(p==1)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;

        }
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
const int maxn=1000010;
int l,n,k,a[maxn];
bool num[maxn];
int main()
{
    cin>>l;
    for (int t=1;t<=l;++t)
    {
        memset(num,false,sizeof(num));
        cin>>n>>k;
        if (k==0)
         for(int i=1;i<=n;++i) 
         cout<<i<<" ";
        else
        if (n%(2*k)!=0)
         cout<<-1;
        else
        {
            for (int i=1;i<=n;++i) 
            a[i]=i;
            for (int i=1;i<=n;++i)
                if (!num[i])
                {
                    swap(a[i],a[i+k]);
                    num[i]=true;
                    num[i+k]=true;
                }
            for(int i=1;i<=n;++i) 
            cout<<a[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}

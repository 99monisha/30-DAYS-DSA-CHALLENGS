#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,m,i,j,p=0,q=0,k,x;
    cin>>n>>m;
    long a[n],l[n],r[n];
    for(i=0;i<n;i++)
    {
        a[i]=-1;
        r[i]=0;
        l[i]=0;
    }
    for(i=0;i<n;i++)
    {
        cin>>x;
        a[x]=x;

    }
for(i=0;i<n;i++)
{
    p=0;
    q=0;
    for(j=i,k=i;j<n || k>=0;j++,k--)
    {
        if(j<n)
        {
            if(a[j]==-1)
            p++;
            else{
            r[i]=p;
            break;
        }
    
    }
    if(k>=0)
    {
        if(a[k]==-1)
        q++;
        else
        {
            l[i]=q;
            break;
        }
    }
}
}
int max1=r[0];
int max2=l[0];
for(i=0;i<n;i++)
{
    if(r[i]>max1)
    max1=r[i];
    if(l[i]>max2)
    max2=l[i];

}
if(max1>max2)
cout<<max1;
else
cout<<max2;

    return 0;
}


/*
int main(){
    int n;
    int m;
    cin >> n >> m;
    vector<int> c(m);
    for(int c_i = 0;c_i < m;c_i++){
       cin >> c[c_i];
    }
    sort(c.begin(), c.end());
    vector<int> dist(n);
    int last = -1000000;
    int cur = 0;
    for (int i = 0; i < n; i++) {
        if (cur < m && c[cur] == i) {
            cur++;
            last = i;
        }
        dist[i] = i - last;
    }
    cur = m-1;
    last = 1000000;
    for (int i = n-1; i >= 0; i--) {
        if (cur >= 0 && c[cur] == i) {
            cur--;
            last = i;
        }
        dist[i] = min(dist[i], last - i);
    }
    printf("%d\n", *max_element(dist.begin(), dist.end()));
    return 0;
}
*/
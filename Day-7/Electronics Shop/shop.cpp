#include <bits/stdc++.h>
using namespace std;
int ans=-1, a[1000], b[1000], i, n, m, s, j;
int main()
{
cin>>s>>n>>m;
    for(i=1; i<=n; ++i) 
    cin>>a[i];
    for(i=1; i<=m; ++i)
     cin>>b[i];

    for(i=1; i<=n; ++i)
    for(j=1; j<=m; ++j)
    if(a[i]+b[j]<=s) 
    ans = max(a[i]+b[j], ans);
    cout<<ans;
    return 0;
}
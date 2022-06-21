#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,i,j,k,l,min;
    cin>>n>>t;
    int a[n];
    for(k=0;k<n;k++)
    cin>>a[k];
    for(l=0;l<t;l++)
    {
        cin>>i>>j;
        min=a[i];
        for(k=i+1;k<=j;k++)
        {
            if(min>a[k])
            min=a[k];
        }
        cout<<min<<endl;
    }
return 0;
}
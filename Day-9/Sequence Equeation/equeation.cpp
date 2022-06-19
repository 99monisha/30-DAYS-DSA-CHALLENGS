#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,x=1;
    cin>>n;
    int a[n];
    for(i=1;i<=n;i++)
    cin>>a[i];
    for(x=1;x<=n;x++){
        for(i=1;i<=n;i++){
            if(a[a[i]]==x)
            {
                cout<<i<<endl;
                break;
            }
        }
    }

    return 0;
}
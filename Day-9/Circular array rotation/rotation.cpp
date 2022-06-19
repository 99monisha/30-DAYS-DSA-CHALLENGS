#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,q,i,j=1,x=0,y=0;
    cin>>n>>k>>q;
    int a[n],b[n];
    for(i=0;i<n;i++)
        cin>>a[i];
        int p=((k+n-1)%n);
        for(i=0;i<n;i++){
            while(1)
            {
                if((p+j)<n && x==0)
                {
                    b[p+j]=a[i];
                    j++;
                    break;
                }
                else{
                    if(y==0)
                    j=0;
                    b[j]=a[i];
                    j++;
                    y=1;
                    x=1;
                    break;
                }
            }
        }
      for(i=0;i<q;i++)
      {
        cin>>x;
        cout<<b[x]<<endl;
      }

    
    return 0;
}
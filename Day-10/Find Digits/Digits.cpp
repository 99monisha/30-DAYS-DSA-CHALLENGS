#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,i,digit,p=0;
    long long int n,x;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        x=n;
        while(n!=0)
        {
            
            digit=n%10;
            if(digit!=0)
            {
            if(x%digit==0)
            p++;
            }
            n/=10;
        }
        cout<<p<<endl;
        p=0;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long n,m,s;
        cin>>n>>m>>s;
        long long result=((m+s-1)%n);
        if(result==0)
        result=n;
        cout<<result<<endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main() {
 
    int n;
    cin>>n;
    unsigned long long int sum=0,res;
    for(int i=0;i<n;i++){
        cin>>res;
        sum+=res;
    }
    cout<<sum;
    
    return 0;
}
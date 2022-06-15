#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    int count[6]={0};
    for(int i=0;i<n;i++)
        {
        cin>>arr[i];
        count[arr[i]]++; }
    int max=count[1];
    int max_index=1;
    for(int i=2;i<=5;i++)
        {
        if(count[i]>max)
            {
            max_index=i;
            max=count[i];
        }}
    cout<<max_index;
    return 0;
}
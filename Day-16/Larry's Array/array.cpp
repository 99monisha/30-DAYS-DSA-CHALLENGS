#include<bits/stdc++.h>
using namespace std;
int main() {
     int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int j=0;j<n;j++)
            cin>>v[j];
        int swp=0;
        for(int i=0;i<v.size();i++)
        {
            for(int j=0;j<v.size()-1;j++)
            {
                if(v[j]>v[j+1]){
                    swap(v[j],v[j+1]);
                    swp++;
                }
            }
        }
        if(swp%2==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO\n";
        
    }
    return 0;
}
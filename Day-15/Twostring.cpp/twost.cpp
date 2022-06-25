#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a; 
    cin>>a;
    for(int g=0;g<a; g++)
    {
        string b,c;
         cin>>b>>c;
          map<char,int>k; 
        for(int y=0;y<b.length();y++)
         k[b[y]]=1;
          int cnt=0; 
        for (int y=0;y<c.length(); y++) 
        {
            if (k[c[y]]) 
            cnt=1; 
        }
        if (cnt) 
        cout<<"YES"<<endl;
        else
         cout<<"NO"<<endl; 
    }
    return 0; 
}
#include<bits/stdc++.h>
using namespace std;
int anagram(string a, string b) {
    int i,c[26]={0},c1[26]={};
    for(i=0;i<a.length();i++)
        {
        if(97<=a[i]&&a[i]<=123)
            c[a[i]-97]++;
    }
    for(i=0;i<b.length();i++)
        {
        if(97<=b[i]&&b[i]<=123)
            c1[b[i]-97]++;
    } 
    int ans=0;
    for(i=0;i<26;i++)
    {
        ans+=abs(c[i]-c1[i]);
        
    }   
 return (ans);
    }

      int main(){
        string a;
       cin>>a;
       string b;
       cin>>b;
       cout<<anagram(a,b)<<endl;
    return 0;
}
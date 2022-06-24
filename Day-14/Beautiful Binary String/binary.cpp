#include<bits/stdc++.h>
using namespace std;
char s[100];
int main(){
    int n;
    int a=0;
    cin>>n;
   cin>>s;
    for(int i=2;s[i]; i++){
        if(s[i-2]=='0' && s[i-1]=='1' && s[i]=='0')
         s[i] = '1', a++;
    }
    cout<<a;
    return 0;
}


#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int h[26],i,max=0,area,b,a;
    for(i=0;i<26;i++){
        cin>>h[i];
    }
    char ch[11];
    cin>>ch;
    a=strlen(ch);
    for(i=0;i<a;i++){
        b=h[i]-97;
        if (h[b]>max)
        max=h[b];
       }
       area=max*a;
       cout<<area;
       return 0;
}
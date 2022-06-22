#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[100000];
    int word=0;
    cin>>s;
    for(int i=0;s[i]!='\0';i++)
    if(s[i]>=65 && s[i]<=90)
    word++;
    cout<<word+1;
 return 0;
}
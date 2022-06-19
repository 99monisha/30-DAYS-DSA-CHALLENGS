#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    long long n;
    cin >> n;
    long long count=0;
    for (int i=0;i<s.size();i++) 
    if (s[i]=='a') 
    count++;
    count*=n/s.size();
    for (int i=0;i<n%s.size();i++) 
    if (s[i]=='a') 
    count++;
    cout << count << endl;
    return 0;
}
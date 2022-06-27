#include<bits/stdc++.h>
using namespace std;
bool result[10000010];
int main(){
    string s;
    cin >> s;
    
    int a = 0;
    for (int i=0; i<s.size(); i++)
     {
        if (i > 0 && s[i] != s[i-1]) a = 0;
        a+= (s[i]-'a'+1);
        result[a] = true;
    }
    
    int n;
    cin >> n;
    for(int b = 0; b < n; b++)
    {
        int q;
        cin >> q;
        cout << (result[q] ? "Yes\n" : "No\n");
    }

    return 0;
}
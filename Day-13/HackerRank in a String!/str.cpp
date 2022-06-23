#include<bits/stdc++.h>
using namespace std;
int main(){
    int q;
    cin >> q;
    for(int j = 0; j < q; j++){
        string s;
        cin >> s;
        string a = "hackerrank";
        int st = 0;
        for (int i= 0; i < s.size() && st < a.size(); i++) 
        {
            if (s[i] == a[st]) 
            {
                st++;
            }
        }
        if (st == a.size()) 
        {
            cout << "YES" << endl;
        } 
        else 
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
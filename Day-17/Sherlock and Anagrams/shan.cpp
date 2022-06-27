#include<bits/stdc++.h>
using namespace std;
int main() {
  int sherlock;
  cin>>sherlock;
  getchar();
  while (sherlock--) {
    unordered_map<string, int> m;
    string s;
    getline(cin, s);
    int n = s.size();
    for (int len = 1;len < n;len++)
    {
      for (int i = 0; i <= n - len;i++)
       {
        string t = s.substr(i, len);
        sort(t.begin(), t.end());
        m[t]++;
      }
    }
    long long ans = 0;
    for (auto t : m) 
    {
      ans += (long long)t.second * (t.second - 1) / 2;
    }
    cout<<ans<<endl;
  }
  return 0;
}
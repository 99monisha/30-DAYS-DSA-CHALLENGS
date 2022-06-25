#include<bits/stdc++.h>
using namespace std;
int main(int ana, char *gram[]) {
  map<char,int> a, b;
  static char str[10000+1];
  int n, total;
  size_t len;
   cin>>n;
for(int i = 0; i < n; ++i) {
    a.clear();
    b.clear();
    total = 0;
     cin>>str;
    if((len = strlen(str)) % 2 != 0)
      cout<<"-1"<<endl;
 else {
      for(size_t j = 0; j < len/2; ++j)
        a[str[j]] += 1;
      for(size_t j = len/2; j < len; ++j)
        b[str[j]] += 1;

      for(auto it = a.begin(); it != a.end(); ++it) {
        if(b.count(it->first) > 0)
         {
          if(b[it->first] < it->second)
           {
            it->second -= b[it->first];
            b[it->first] = 0;
          }
          else {
            b[it->first] -= it->second;
            it->second = 0;
          }
        }
      }

      for(auto it = a.begin(); it != a.end(); ++it)
        total += it->second;

     cout<<total<<endl;
    }
  }

  return 0;
}
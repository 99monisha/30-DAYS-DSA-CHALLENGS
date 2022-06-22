#include<bits/stdc++.h>
using namespace std;
int main() {
  int num = 0; 
  cin >> num;
  while (num--) {
    int n = 0,a = 0,b = 0;
    cin >> n >> a >> b;
    set<int> s;
    for (int i = 0; i <= n - 1; ++i) {
      s.insert(i * a + (n - 1 - i) * b);
    }
    for (set<int>::iterator it = s.begin(); it != s.end(); ++it)
     {
      if (it != s.begin()) cout << " ";
      cout << *it;
    }
    cout << "\n";
  }

  return 0;
}
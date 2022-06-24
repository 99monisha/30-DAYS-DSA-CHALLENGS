#include<bits/stdc++.h>
 #define ll long long
#define ld double
#define pii pair <ll, ll>
#define mp pair1
using namespace std;
int main() {
        int a;
    cin >> a;

    while (a--) {
    string s;

    cin >> s;

if (s[0] == '0')
 {
cout << "NO\n";
continue;
}

ll n = 0;

    bool st = false;

    for (int i = 0; i < (int)s.size(); i++)
 {
    n *= 10;
    n += s[i] - '0';

    ll r = 0;

    if (s[i + 1] == '0')     
{
    continue;
}

    int count = 1;

    for (int j = i + 1; j < (int)s.size(); j++)
 {
       r *= 10;
       r += s[j] - '0';

       if (r == n + count) 
    {
       if (j + 1 == (int)s.size()) {
       st = true;
       break;
}

          if (s[j + 1] == '0') {
break;
}

r = 0;
      count++;
}
}

    if (st) {
    break;
}
}

    if (st) {
    cout << "YES " << n << endl;
} else {
cout << "NO\n";
}
}
return 0;
}


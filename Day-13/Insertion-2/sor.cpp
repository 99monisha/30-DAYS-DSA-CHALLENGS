#include<bits/stdc++.h>
using namespace std;

#define N 1010
int s;
int a[N];
int main() {
    cin >> s;
    for (int i = 0; i < s; i ++)
     cin >> a[i];
    for (int i = 1; i < s; i ++) 
    {
        int v = a[i], p = i - 1;
        while (p>= 0 && a[p] > v) 
        {
            a[p + 1] = a[p];
            p --;
        }
        a[p + 1] = v;
    for (int i=0; i<s-1; i ++) 
    cout << a[i] << ' ';
    cout << a[s - 1] << endl; 
    }
    return 0;
}
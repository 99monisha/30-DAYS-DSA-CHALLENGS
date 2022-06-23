#include<bits/stdc++.h>
using namespace std;
int main() {
    int V, n, t;
    cin >> V;
    cin >> n;
    int a[n];
    
    for(int i = 0; i < n; i++) {
        cin >> t;
        a[i] = t;  
    }
    for(int i = 0; i < n; i++) {
        if(a[i] == V) {
            cout << i << endl;;
        }
        
    }
     return 0;
}
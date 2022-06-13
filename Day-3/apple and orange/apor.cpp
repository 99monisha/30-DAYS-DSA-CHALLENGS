#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int s, t, a, b, n, m, d, apple=0, orange=0;
    cin >> s >> t >> a >> b >> m >> n;
    for(int i=0;i<m; i++) {
        cin>>d;
        d = a+d;
        if(d>=s && d<=t)
            apple++;
    }
    for(int i=0;i<n; i++) {
        cin>>d;
        d = b+d;
        if(d>=s && d<=t)
            orange++;
    }
    cout << apple << endl;
    cout << orange << endl; 
    return 0;
}
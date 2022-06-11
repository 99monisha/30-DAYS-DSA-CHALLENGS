#include <bits/stdc++.h>
using namespace std;
int main() {
 
    int a[3],b[3],a1 = 0,b1 = 0;
 
    cin >> a[0] >> a[1] >> a[2];
    cin >> b[0] >> b[1] >> b[2];
 
    for(int i = 0; i < 3; i++){
        if(a[i] > b[i])a1++;
        if(a[i] < b[i])b1++;
    }
    cout << a1 << " " << b1 << endl;
    return 0;
}
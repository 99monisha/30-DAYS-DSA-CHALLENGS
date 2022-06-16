#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n, k, sum=0;
    cin >> n >> k;
    for (int i=0;i<n;i++) {
        int a;
        cin >> a;
        if (i!=k) sum+=a;
    }
    int bill;
    cin >> bill;
    if (sum/2==bill) cout << "Bon Appetit" << endl;
    else cout << bill-sum/2 << endl;
    return 0;
}
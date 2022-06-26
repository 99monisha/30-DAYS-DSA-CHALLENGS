#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    vector<int> B(A);
    sort(B.begin(), B.end());
    int s = -1, end = -1;
    int count = 0;
    for (int  i = 0; i < n; i++) {
        if (A[i] != B[i]) {
            count++;
            if (s == -1) {
                s = i;
            }
            end = i;            
        }
    }
    if (count == 2) {
        cout << "yes"<<endl;
        cout << "swap ";
        cout << s + 1<<" "<<end + 1<<endl;
        return 0;
    }
     for (int i = 0; i < count / 2; i++) {
        if (A[end - i] != B[s + i]) {
            cout << "no" <<endl;
            return 0;
        }
         }
    cout << "yes"<<endl;
    cout << "reverse "<<s + 1<<" "<<end + 1<<endl;  
    return 0;
}
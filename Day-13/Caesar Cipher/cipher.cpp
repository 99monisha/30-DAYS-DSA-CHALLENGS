#include<bits/stdc++.h>
using namespace std;
int main() {
    int N = 0, K = 0;
    string asci, d;
    cin >> N; 
    getline(cin, d);
    getline(cin, asci);
    cin >> K;
    int len = asci.length();
    for (int i = 0; i < len; ++i)
        {
        if (65 <= asci[i] && asci[i] <= 90)
            asci[i] = char(65 + ((asci[i] - 65) + K) % 26);
        else if (97 <= asci[i] && asci[i] <= 122)
            asci[i] = char(97 + ((asci[i] - 97) + K) % 26);
    }       
    cout << asci << endl;
    return 0;
}

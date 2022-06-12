#include <iostream>
using namespace std;
int main() {
    int N, n, Avg;
    float positive = 0., negative= 0., zero= 0.;
    cin >> N;
    Avg = N;
    while (N--) {
        cin >> n;
        if (n > 0) 
        positive++;
        else if (n < 0) 
        negative++;
        else zero++;
    }
    cout << positive / Avg << endl;
    cout << negative / Avg << endl;
    cout << zero / Avg << endl;
    return 0;
}

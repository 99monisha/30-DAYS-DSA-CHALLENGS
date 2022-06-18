
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int T;
    cin >> T;
    for(int t = 0; t<T; t++){
        int N;
        cin >> N;
        int hightinc = 1;
        for(int i=0;i<N;i++){
            if(i%2==0)
            hightinc*=2;
            else 
            hightinc++;
        }
        cout << hightinc << endl;
    }
    return 0;
}
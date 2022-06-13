#include <iostream>
using namespace std;
int main() {
	int n, maxheight = 0, count, x;
	
	cin >> n;
    for( int i=0; i<n; i++ ) {
		cin >> x;
		if( x > maxheight ) {
			maxheight = x; 
			count = 1;
		}
		else if( x == maxheight )
			count++;
	}
	cout << count;
	return 0;
}
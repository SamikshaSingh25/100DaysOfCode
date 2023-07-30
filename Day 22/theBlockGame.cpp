#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t>0) {
	    int n;
	    cin >> n;
	    int num = n;
	    int ans = 0;
	    while (n>0) {
	        int remainder = n % 10;
	        n = n/10;
	        ans = ans * 10 + remainder;
	    }
	    if (ans == num) {
	        cout << "wins" << endl;
	    }
	    else {
	        cout << "loses" << endl;
	    }
	    t = t - 1;
	}
	return 0;
}

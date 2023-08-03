#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string s;
        cin >> s;
        int a = (s[0] - '0') * 10 + (s[1] - '0');
        int b = (s[3] - '0') * 10 + (s[4] - '0');
        if(a <= 12 && b <= 12){ 
            cout << "BOTH\n";
        }
        else if(a > 12) {
            cout << "DD/MM/YYYY\n";
        }
        else {
            cout << "MM/DD/YYYY\n";
        }
	}
	return 0;
}

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        unsigned long long a, b;
        cin >> a >> b;  
        unsigned long long result = a + b;  
        cout << result << "\n"; 
    }
    return 0;
}

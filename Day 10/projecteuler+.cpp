#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


long long sum(int n) { 
    n--;

long long three = n / 3;
long long five = n / 5;
long long fifteen = n / 15;

long long sum_three = 3 * (three * (three + 1) / 2);
long long sum_five = 5 * (five * (five + 1) / 2);
long long sum_fifteen = 15 * (fifteen * (fifteen + 1) / 2);

return sum_three + sum_five - sum_fifteen;
}

int main() { int t; cin >> t;

while (t--) {
    int n;
    cin >> n;

    long long result = sum(n);
   cout << result << endl;
}

return 0;
}

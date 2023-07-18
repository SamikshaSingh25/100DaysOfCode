#include <iostream>

class Solution {
public:
    int integerReplacement(long n) {
        int count = 0;
        while (n > 1) {
            if (n % 2 == 0) {
                n = n / 2;
            } else if ((n + 1) % 4 == 0 && n!=3) {
                n = n + 1;
            } else {
                n = n - 1;
            }
            count++;
        }
        return count;
    }
};

int main() {
    Solution solution;

    long n;
    std::cin >> n;

    int result = solution.integerReplacement(n);
    std::cout << result << std::endl;

    return 0;
}

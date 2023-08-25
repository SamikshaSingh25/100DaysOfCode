#include <iostream>
#include <string>

using namespace std;

int main() {
    int N;
    cin >> N;

    while (N--) {
        string password;
        cin >> password;

        bool isPalindrome = true;
        int length = password.length();

        for (int i = 0; i < length / 2; ++i) {
            if (password[i] != password[length - i - 1]) {
                isPalindrome = false;
                break;
            }
        }

        if (isPalindrome) {
            cout << length << " " << password[length / 2] << endl;
            break;
        }
    }

    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (i > 0 && i < n - 1)
            {
                if (a[i] != a[i - 1] || a[i] != a[i + 1])
                {
                    count++;
                }
            }
        }
        if (a[n - 1] != a[n - 2])
        {
            count++;
        }
        if (a[0] != a[1])
        {
            count++;
        }
        cout << count << endl;
    }
    return 0;
}

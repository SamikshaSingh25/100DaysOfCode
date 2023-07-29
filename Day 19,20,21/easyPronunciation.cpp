#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
// #include <stdlib.h>
#include <math.h>
using namespace std;

bool isvowel(char a)
{
    if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
    {
        return true;
    }
    else
        return false;
}

int main()
{
    int testcase;
    cin >> testcase;
    for (int testcase_variable = 0; testcase_variable < testcase; testcase_variable++)
    {
        int n, ans = 0;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (isvowel(s[i]))
            {
                ans=0;
            }
            else
            {
                ans++;
                if (ans>=4)
                {
                    break;
                }
                
            }
        }
        if (ans>=4)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}

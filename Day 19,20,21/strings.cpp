#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s;
getline(cin, s);

for(char val: s)
{
    if(val==',')
    {
        cout<<endl;
    }
    else
    {
        cout<<val;
    }

}

return 0;
}

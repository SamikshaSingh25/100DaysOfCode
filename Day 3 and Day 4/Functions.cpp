#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a>b && a>c && a>d){
        cout<<a;
    }
    else if(b>c && b>d){
        cout<<b;
    }
    else if(c>d){
        cout<<c;
    }
    else{
        cout<<d;
    }
    return 0;
}

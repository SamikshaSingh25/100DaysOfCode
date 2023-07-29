#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int multiplication(int &x,int&y){
    return x*y;
}
int main() {

int x;
int y;

cin >> x >>y ;
cout <<x<<" "<<y<<endl ;
cout << multiplication(x,y);
return 0; 
}

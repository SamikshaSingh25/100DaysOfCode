#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stdio.h>
using namespace std;
void update(int *a,int *b) {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int sum = *a+*b;
    int mult;
    if(*a>*b)
    {
         mult = *a-*b;
    }  
    else
    {
        mult = *b-*a;
    }
     *a = sum;
   *b = mult;
}
int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);
    return 0;
}
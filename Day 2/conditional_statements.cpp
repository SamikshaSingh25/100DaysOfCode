#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    
    string words[10]={"" , "one", "two", "three", "four","five","six", "seven", "eight", "nine"};
    if(n>=1 && n<=9){
        cout<<words[n];
    }
    else{
        cout<<"Greater than 9";
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        string ans = "";
        if(s[0] == '0'){
            ans+='1';
            k--;
        }
        if(s[0]=='1') ans+='1';
        for(int i = 1; i<n; i++){
            ans+=s[i];
        }
        while(k--){
            ans+='0';
        }
        cout<<ans<<endl;
    }
}
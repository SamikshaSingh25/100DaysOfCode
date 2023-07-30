#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	   unordered_map<char,int>m;
	   //frequencies store krva liya
	   for(int i=0;i<n;i++){
	       m[s[i]]++;
	   }
	   
	   bool ans=true;
	   
	   for(char i='a';i<='z';i++){
	       
	       if(!m.count(i)){
	           continue;
	       }
	       else if(m[i]%2!=0){
	            ans=false;
	            break;
	           
	       }
	       
	   }
	   
	   if(ans){
	       cout<<"YES"<<endl;
	   }
	   else{
	       cout<<"NO"<<endl;
	   }
	   
	   
	}
	return 0;
}
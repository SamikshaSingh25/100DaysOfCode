#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int s1=0,s2=0,max1=0,max2=0;
	for(int i=0;i<n;i++){
	    int x,y;
	    cin>>x>>y;
	    s1+=x;
	    s2+=y;
	    if(s1>s2){
	        if(s1-s2>max1){
	            max1=s1-s2;
	        }
	    }
	    else if(s1<s2){
	        if(s2-s1>max2){
	            max2=s2-s1;
	        }
	    }
	}
	if(max1>max2){
	    cout<<1<<" "<<max1<<endl;
	}
	else{
	    cout<<2<<" "<<max2<<endl;
	}
	return 0;
}
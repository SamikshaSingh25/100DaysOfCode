#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a,b,x,y;
	cin>>a>>b>>x>>y;
	int messi,ronaldo;
	messi=((a*2)+b);
	ronaldo=((x*2)+y);
	if(messi>ronaldo){
	    cout<<"Messi"<<endl;
	}
	else if(ronaldo>messi){
	    cout<<"Ronaldo"<<endl;
	}
	else{
	    cout<<"Equal"<<endl;
	}
	return 0;
}

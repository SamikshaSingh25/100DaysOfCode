#include <iostream>
using namespace std;

int main() {
	
	int t; cin>>t;
	while(t--)
	{
	    
	    string s; 
	    cin>>s;
	    int flag =0; //declaring variable to count a sequesnece of vowels 
	    for(int i=0; i<s.length(); i++)
	    {
	        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') flag++; //checking the element is vowel or not. if yes then it will be counted
	        else flag=0; //if not, then the flag will be reset, cause the vowel substring has to be continuous. Not a single consonent can be there in between any two vowels
	        
	        if(flag == 3) break; //if the flag reachs 3, that means the mian string have a substring of more than two continuous vowels 
	        
	    }
	    if(flag == 3) cout << "Happy" <<endl; //if the flag reachs 3,that means chef is happy
	    else cout << "sad" <<endl; //if not, then chef is sad
	}
	return 0;
}
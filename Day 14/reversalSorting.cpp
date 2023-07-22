#include <iostream>
using namespace std;

bool bubbuleSort(int * arr, int n, int x)
{
    for(int i = 0; i < n - 1; i++)
    {
        if(arr[i] > arr[i+1])
        {
            //special condition
            if(arr[i]+arr[i+1] <= x)
            {
                swap(arr[i],arr[i+1]);
            }
            else{
                return false;
            }
        }
        
    }
    
    return true;
}

int main() {
	// your code goes here
	int ttt;
	cin>>ttt;
	while(ttt--)
	{
	    int nnn,xxx;
	    cin>>nnn>>xxx;
	    
	    int arr[nnn];
	    for(int i = 0; i < nnn ;i++)
	    {
	        cin>>arr[i];
	    }
	    
	    if(bubbuleSort(arr, nnn, xxx))
	    {
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	    
	}
	return 0;
}

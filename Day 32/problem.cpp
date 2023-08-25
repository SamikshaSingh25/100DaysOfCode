#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
{
    int a,b,p,temp=10,q;
    cin>>a>>b;
    p=max(a,b);
    q=min(a,b);
    if (p==q){
        cout<<"YES"<<endl;
    }
    else
    {
        for(int i=p;i>0;i--){
            p=p-1;
            q=q+1;
            if (p==q){
                temp=0;
                break;
            }
        }
        if(temp==0)
        
            cout<<"YES"<<endl;
        
        else
        
            cout<<"NO"<<endl;
            
        }
    }
        return 0;
}
    



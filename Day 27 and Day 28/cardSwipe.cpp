#include <iostream>

using namespace std;

int main() 
{
    int  i,j,l,m,n,T;
    cin>>T;
    while(T--)
    {
        int maxi=0,k=0,maxi2=0;
        cin>>n;//tot swipes
        int A[n];
        for(i=0;i<n;i++)
        {
            cin>>A[i];
            maxi=max(maxi,A[i]);
        }
        //cout<<maxi<<endl;
        m=maxi+1;
        int C[m]={0},M[n]={0};
        for(i=0;i<n;i++)
        {
            C[A[i]]++;
            if(C[A[i]]%2 != 0)
            {
                if(i==0)
                {
                    M[i]++;
                }
                else
                {
                    M[i]=M[i-1]+1;
                }
            }
            else
            {
                M[i]=M[i-1]-1;
            }
            maxi2=max(maxi2,M[i]);
        }
        cout<<maxi2<<endl;
    }
}
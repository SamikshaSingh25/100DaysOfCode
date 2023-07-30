#include <bits/stdc++.h>
using namespace std;
   
   int main()
    {
        int t; cin>>t;
        
        for(int i = 0; i < t ; i = i + 1 )
        {
            int n,c = 0; cin>>n;
            string s; cin>>s;
            for(int i=0;i<n-1;i++)
            {
               for(int k=i+1;k<n;k++)
               {
                   if(s[i]==s[k])
                   {
                       c = 1;
                       break;
                   }
               }
            }
            if(c==1)
            {
                cout << n-2 << endl;
            }
            else
            {
                cout << -1 << endl;
            }
            
        }
        return 0;
    }
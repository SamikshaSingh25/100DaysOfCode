#include<iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        if(a>abs(b-c))
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}
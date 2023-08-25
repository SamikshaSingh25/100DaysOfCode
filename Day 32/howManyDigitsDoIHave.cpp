#include <iostream>

using namespace std;



int main() 

{int n,count;

    cin>>n;

    while(n>0)

    {

        int rem=n%10;

        count++;

        n=n/10;

    }

    if(count>3)

    {

    cout<<"More than 3 digits"<<endl;

    }

    else

    {

        cout<<count<<endl;

    }count=0;

}
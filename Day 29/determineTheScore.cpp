#include <iostream>

using namespace std;



int main()

{

	int t;

	cin>>t;

while(t--)

{

    int X,Y;

    cin>>X>>Y;

    cout<<endl;

    if(X<=10)

    {

        X=X/10;

        cout<<X*Y;

    }

    else if (X<=100)

    {

        X=X/10;

        cout<<X*Y;

    }

    else

    {

        X=X/10;

        cout<<X*Y;

    }

}

	return 0;

}


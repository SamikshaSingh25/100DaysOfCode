#include <iostream>

using namespace std;



int main() {

    int t;  cin>>t;

    int bg, mg, rg, eg;

    string team;

    while(t--){

        

            for(int i=1; i<=4; i++){

                cin>>team;

                if(team == "Barcelona") cin>>bg;

                else if(team == "Malaga") cin>>mg;

                else if(team == "RealMadrid") cin>>rg;

                else if(team == "Eibar") cin>>eg;

            }

            

            if(bg>eg && rg<mg) cout<<"Barcelona\n";

            else cout<<"RealMadrid\n";

        

    }

	

	return 0;

}


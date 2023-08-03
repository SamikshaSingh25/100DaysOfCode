class Solution {
public:
    int romanToInt(string s) {
        char c;
        int res=0;
        int prev=0;
        int n=s.length();
        for(int i=n-1;i>=0;i--){
            c=s[i];
            switch(c){
                case 'I':{
                    if(prev<=1)
                        res+=1;
                    else
                        res-=1;
                    prev=1;
                    break;
                }
                case 'V':{
                    if(prev<=5)
                        res+=5;
                    else
                        res-=5;
                    prev=5;
                    break;
                }
                case 'X':{
                    if(prev<=10)
                        res+=10;
                    else
                        res-=10;
                    prev=10;
                    break;
                }
                case 'L':{
                    if(prev<=50)
                        res+=50;
                    else
                        res-=50;
                    prev=50;
                    break;
                }
                case 'C':{
                    if(prev<=100)
                        res+=100;
                    else
                        res-=100;
                    prev=100;
                    break;
                }
                case 'D':{
                    if(prev<=500)
                        res+=500;
                    else
                        res-=500;
                    prev=500;
                    break;
                }
                case 'M':{
                    if(prev<=1000)
                        res+=1000;
                    else
                        res-=1000;
                    prev=1000;
                    break;
                }
            }
        }
        return res;
    }
};
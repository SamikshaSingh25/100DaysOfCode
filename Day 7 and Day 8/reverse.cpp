class Solution {
public:
    int reverse(int x) {
        long r=0;
        while(x!=0){
            long last=x%10;
            r=r*10+last;
            x=x/10;
        }
        return (r > pow(2,31)-1 || r < pow(-2, 31)) ? 0 : r;
    }
};
